#pragma once
#include "Elemento.h"
using namespace std;

class ElementoPersona : Elemento {

	friend ostream & operator<<(ostream &, ElementoPersona &);

private:
	Elemento * raiz;

public:
	ElementoPersona();
	virtual ~ElementoPersona();
	void insertarElemento(Elemento *);

private:
	void insertarElementoRec(Elemento *, Elemento *);
	void imprimir(Elemento *, ostream &, int);
	void destruirRec(Elemento *);
};

ostream & operator<<(ostream &, ElementoPersona &);
