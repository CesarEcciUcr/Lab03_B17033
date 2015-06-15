#include "stdafx.h"
#include "ElementoPersona.h"
#include "ElementoPersona.h"

ElementoPersona::ElementoPersona() {
	raiz = NULL;
}

ElementoPersona::~ElementoPersona() {
	if (raiz != NULL) {
		destruirRec(raiz);
	}
}

void ElementoPersona::destruirRec(Elemento * nodo) {
	if (nodo->getHijoIzq() != NULL) {
		destruirRec(nodo->getHijoIzq());
	}
	if (nodo->getHijoDer() != NULL) {
		destruirRec(nodo->getHijoDer());
	}
	delete nodo;
}


void ElementoPersona::insertarElemento(Elemento * elemento) {
	if (raiz == NULL) {
		raiz = elemento;
	}
	else {
		insertarElementoRec(raiz, elemento);
	}
}

void ElementoPersona::insertarElementoRec(Elemento * nodoActual,
	Elemento * elemento) {
	if (*nodoActual < *elemento) {
		if (nodoActual->getHijoIzq() != NULL) {
			insertarElementoRec(nodoActual->getHijoIzq(), elemento);
		}
		else {
			nodoActual->setHijoIzq(elemento);
		}
	}
	else {
		if (nodoActual->getHijoDer() != NULL) {
			insertarElementoRec(nodoActual->getHijoDer(), elemento);
		}
		else {
			nodoActual->setHijoDer(elemento);
		}
	}
}

ostream & operator<<(ostream & out, ElementoPersona & a) {
	a.imprimir(a.raiz, out, 0);
	return out;
}

void ElementoPersona::imprimir(Elemento* nodo, ostream& out, int profundidad) {
	if (nodo->getHijoIzq() != NULL) {
		imprimir(nodo->getHijoIzq(), out, profundidad + 1);
	}
	for (int i = 0; i < profundidad; ++i) {
		cout << "\t";
	}
	out << *nodo << endl;
	if (nodo->getHijoDer() != NULL) {
		imprimir(nodo->getHijoDer(), out, profundidad + 1);
	}
}
