#pragma once
#include"Estrategia.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using std::string;
#include"ContenedorM.h"
class Aleatorio :public Estrategia
{
private:
	ContenedorM* tab;
	int filas;
	int columnas;
public:
	Aleatorio();
	~Aleatorio();
	virtual bool jugada();
	string toString();
	void mover();
	void setFilas(int);
	void setColumnas(int);
};