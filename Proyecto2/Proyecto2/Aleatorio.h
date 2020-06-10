#pragma once
#include"Estrategia.h"
#include<iostream>
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
	virtual void jugada();
	string toString();
	void mover();
};