#pragma once
#include"Estrategia.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Lista.h"
using std::string;

class Aleatorio :public Estrategia{
private:
	ContenedorM* tab;
	Lista* lis;
	int filas;
	int columnas;
public:
	Aleatorio(ContenedorM*, Lista*);
	~Aleatorio();
	virtual bool jugada();
	string toString();
	void mover();
	void setFilas(int);
	void setColumnas(int);
};