#pragma once
#include"ElementosDeMatriz.h"

class Cuadro1 : public ElementosDeMatriz {
	string nombreClase;
public:
	virtual string toString();
	virtual string toString2();
	string getNombreClase();
};