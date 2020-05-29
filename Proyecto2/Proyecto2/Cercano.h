#pragma once
#include"Estrategia.h"
#include<iostream>
using std::string;
class Cercano :public Estrategia
{
private:
	char** tab;
	int filas;
	int columnas;
public:
	Cercano();
	~Cercano();
	virtual void jugada();
	string toString();
	void mover();
};