#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include"Conexion.h"

class ContenedorM{
private:
	string*** mat;//Siguiendo el UML del profe
	int fil;
	int col;
	string separador;//Siguiendo el UML del profe
	int cantidadM;
public:
	ContenedorM(int,int,int);
	virtual ~ContenedorM();
	string toStirng() const;
	void ingresaPunto(int, int,Conexion*);//Siguiendo el UML del profe
	int getFila();
	int getColumna();
	void setFila(int);
	void setCol(int);
	string getSeparador();
	void setSeparador(string);
};

