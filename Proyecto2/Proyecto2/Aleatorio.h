#pragma once
#include"Estrategia.h"
#include<iostream>
using std::string;
class Aleatorio :public Estrategia
{
private:
	char** tab;
	int filas;
	int columnas;
public:
	Aleatorio();
	~Aleatorio();
	virtual void jugada();
	string toString();
	void mover();
};