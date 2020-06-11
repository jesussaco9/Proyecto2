#pragma once
#include "ElementosDeMatriz.h"

class ElementoVacio:public ElementosDeMatriz{
private:
	string nombreClase;
public:
	ElementoVacio();
	virtual string toString();
	virtual string toString2();
	string getNombreClase();
	void setGanador(string);
};

