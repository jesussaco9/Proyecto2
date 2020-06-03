#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
#include <Windows.h>
using namespace std;


class Conexion {

protected:

	int posicionX;
	char posicionY;
	string color;
	string tipo;

public:

	virtual ~Conexion();
	virtual string toString();
	virtual string toString2();
	virtual void setColor(string);
	virtual void setTipo(string);
	virtual int getPosicionX();
	virtual char getPosicionY();
	virtual void setPosicionX(int);
	virtual void setPosicionY(char);
	string getColor();
	virtual string nombClase();
	string getTipo();
	static void cambColor(int X);

};