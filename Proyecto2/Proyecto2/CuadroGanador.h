#pragma once
#include "ElementosDeMatriz.h"

class CuadroGanador :public ElementosDeMatriz {
private:
	string ganador;
	string ganador2;
	int valor;
public:
	CuadroGanador();
	virtual ~CuadroGanador();
	virtual string toString();
	virtual string toString2();
	virtual int getPosicionX();
	virtual int getPosicionY();
	virtual void setPosicionX(int);
	virtual void setPosicionY(int);
	void setGanador(string);
	void setGanador2(string);
	string getGanador();
	string getTipo();
};