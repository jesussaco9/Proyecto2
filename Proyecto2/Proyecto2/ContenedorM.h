#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "ContenedorV.h"
#include "ElementosDeMatriz.h"
#include "Punto.h"
#include "Conexion.h"
using namespace std;

class ContenedorM{
private:
	ElementosDeMatriz*** mat;//Siguiendo el UML del profe
	ContenedorV* vector;
	int fil;
	int col;
	int inicia, fin;
	string separador;//Siguiendo el UML del profe
	int cantidadM;
public:
	ContenedorM(/*int,int,int*/ContenedorV*);
	virtual ~ContenedorM();
	void pasaInfoVectorMatriz();
	void llenarMatrizElementos();
	ElementosDeMatriz* retornarPos(int x, int y);
	string toStirng() const;
	void ingresaPunto(int, int);//Siguiendo el UML del profe
	int getFila();
	int getColumna();
	void setFila(int);
	void setCol(int);
	int getInicia();
	int getFin();
	void setInicia(int);
	void setFin(int);
	bool continuaJuego();
	bool posicionVacia(int,int);
	/*string getSeparador();
	void setSeparador(string);*/
};

