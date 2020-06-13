#pragma once
#include"Estrategia.h"
#include<iostream>
using std::string;
class Periferico :public Estrategia
{
private:
	ContenedorM* tab;
	Lista* lis;
	int filas;
	int columnas;
	int ini;
public:
	Periferico(ContenedorM*, Lista*);
	~Periferico(); 
	virtual bool jugada();
	string toString();
	void mover();
	virtual void setFilas(int);
	virtual void setColumnas(int);
	int getInicio();
	void setInicio(int);
};