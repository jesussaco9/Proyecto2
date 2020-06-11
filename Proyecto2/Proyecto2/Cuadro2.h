#pragma once
#include"ElementosDeMatriz.h"

class Cuadro2 : public ElementosDeMatriz {
	string nombreClase;
public:
	virtual string toString();
	virtual string toString2();
	string getNombreClase();
};
