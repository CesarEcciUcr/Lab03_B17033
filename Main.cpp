// Lab03_B17033.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "ElementoPersona.h"
#include "Elemento.h"
#include "Persona.h"
#include "ArbolBinario.h"
#include "ElementoDouble.h"

int _tmain(int argc, _TCHAR* argv[])
{
	srand((double)time(NULL));
	///Arbol de doubles
	ArbolBinario arbolDoubles;
	for (int i = 0; i < 25; ++i)
	{
		arbolDoubles.insertarElemento(new ElementoDouble(rand() % 100 + 0.87));
	}
	cout << arbolDoubles << endl;

	///Arbol de Personas
	ArbolBinario arbolPersonas;

	arbolPersonas.insertarElemento(new ElementoPersona(307120295, "Cesar Vasquez"));
	arbolPersonas.insertarElemento(new ElementoPersona(207640350, "Greivin Alonso"));
	arbolPersonas.insertarElemento(new ElementoPersona(705790800, "Richard Gibson"));
	arbolPersonas.insertarElemento(new ElementoPersona(115320221, "Albert Loaiza"));
	arbolPersonas.insertarElemento(new ElementoPersona(804560312, "Sara Campos"));
	arbolPersonas.insertarElemento(new ElementoPersona(402130555, "Marta Venavides"));

	cout << arbolPersonas << endl;
	return 0;
}

