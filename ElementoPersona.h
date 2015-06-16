#pragma once
#include "Elemento.h"
using namespace std;

class ElementoPersona : public Elemento {

protected:
	int iD;
	string nombre;

public:
	ElementoPersona(int, string);
	virtual ~ElementoPersona();
	virtual int compareTo(Elemento *);
	virtual void imprimir(ostream &) const;
};