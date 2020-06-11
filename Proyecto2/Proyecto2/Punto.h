#pragma once
#include "ElementosDeMatriz.h"

class Punto:public ElementosDeMatriz{
private:
public:
	Punto();
	virtual ~Punto();
	virtual string toString();
	virtual string toString2();
	virtual int getPosicionX();
	virtual int getPosicionY();
	virtual void setPosicionX(int);
	virtual void setPosicionY(int);
	string getTipo();
	void setGanador(string);
};

