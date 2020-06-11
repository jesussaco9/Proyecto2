#pragma once
#include "ElementosDeMatriz.h"

class CuadroGanador :public ElementosDeMatriz {
private:
public:
	CuadroGanador();
	virtual ~CuadroGanador();
	virtual string toString();
	virtual string toString2();
	virtual int getPosicionX();
	virtual int getPosicionY();
	virtual void setPosicionX(int);
	virtual void setPosicionY(int);
	string getTipo();
};