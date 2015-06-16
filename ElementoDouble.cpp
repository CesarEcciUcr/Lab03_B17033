#include "stdafx.h"
#include "ElementoDouble.h"


ElementoDouble::ElementoDouble(double i)
{
	this->i = i;
}

ElementoDouble::~ElementoDouble() {
}

int ElementoDouble::compareTo(Elemento * otro) {
	double tmp = 0;
	ElementoDouble * eDouble = static_cast<ElementoDouble *>(otro);
	if (eDouble != 0) {
		tmp = this->i < eDouble->i ? -1 : this->i == eDouble->i ? 0 : 1;
	}
	return tmp;
}

void ElementoDouble::imprimir(ostream& out) const {
	out << i;
}
