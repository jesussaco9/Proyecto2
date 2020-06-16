#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
#include <Windows.h>
using namespace std;

class ElementosDeMatriz{
protected:
	int posicionX;
	int posicionY;
	string tipo;
public:
	//ElementosDeMatriz();
	virtual ~ElementosDeMatriz();
	virtual string toString() = 0;
	virtual string toString2() = 0;
	virtual int getPosicionX();
	virtual int getPosicionY();
	virtual void setPosicionX(int);
	virtual void setPosicionY(int);
	virtual void setGanador(string);
	virtual void setGanador2(string);
	virtual string getGanador();
	virtual string getTipo();
	virtual string getNombreClase();
};

