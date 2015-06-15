#pragma once
#include "Elemento.h"
using namespace std;

class ElementoDouble : public Elemento {

protected:

	double i;

public:
	ElementoDouble(double i);
	virtual ~ElementoDouble();
	virtual int compareTo(Elemento *);
	virtual void imprimir(ostream &) const;

};
