#pragma once
#include"Estrategia.h"
#include<iostream>
using std::string;
class Islas :public Estrategia
{
private:
	char** tab;
	int filas;
	int columnas;
public:
	Islas();
	~Islas();
	virtual void jugada();
	string toString();
	void mover();
};