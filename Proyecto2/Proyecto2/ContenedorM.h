#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "ElementosDeMatriz.h"
#include "Punto.h"
#include "Conexion.h"
using namespace std;

class ContenedorM{
private:
	ElementosDeMatriz*** mat;//Siguiendo el UML del profe
	int fil;
	int col;
	string separador;//Siguiendo el UML del profe
	int cantidadM;
public:
	ContenedorM(int,int,int);
	virtual ~ContenedorM();
	void llenarMatrizElementos();
	ElementosDeMatriz* retornarPos(int x, int y);
	string toStirng() const;
	void ingresaPunto(int, int);//Siguiendo el UML del profe
	int getFila();
	int getColumna();
	void setFila(int);
	void setCol(int);
	/*string getSeparador();
	void setSeparador(string);*/
};

