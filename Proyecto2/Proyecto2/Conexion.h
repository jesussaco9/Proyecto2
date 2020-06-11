#pragma once

#include "ElementosDeMatriz.h"

class Conexion:public ElementosDeMatriz{
private:
	string separadorHorizontal;
public:
	Conexion();
	virtual ~Conexion();
	virtual string toString();
	virtual string toString2();
	void setSeparadorHorizontal(string);
	string getSeparadorHorizontal();
	virtual int getPosicionX();
	virtual int getPosicionY();
	virtual void setPosicionX(int);
	virtual void setPosicionY(int);
	string getTipo();
	void setGanador(string);
};