#pragma once
#include"Estrategia.h"
#include<iostream>
using std::string;
class Cercano :public Estrategia
{
private:
	ContenedorM* tab;
	Lista* lis;
	int filas;
	int columnas;
public:
	Cercano(ContenedorM*, Lista*);
	~Cercano();
	virtual bool jugada();
	string toString();
	void mover();
	virtual void setFilas(int);
	virtual void setColumnas(int);
	void setCont(int);
};