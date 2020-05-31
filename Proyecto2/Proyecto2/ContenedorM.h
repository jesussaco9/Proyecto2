#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class ContenedorM{
private:
	string*** mat;//Siguiendo el UML del profe
	int fil;
	int col;
	//int separador;//Siguiendo el UML del profe
public:
	ContenedorM(int,int);
	virtual ~ContenedorM();
	string toStirng() const;
	void ingresaPunto(int, int,bool);//Siguiendo el UML del profe
	int getFila();
	int getColumna();
	void setFila(int);
	void setCol(int);
	//int getSeparador();
};

