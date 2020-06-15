#pragma once
#include"ElementosDeMatriz.h"
#include "Lista.h"

class Cuadro2 : public ElementosDeMatriz {
	string nombreClase;
public:
	virtual string toString();
	virtual string toString2();
	string getNombreClase();
};
