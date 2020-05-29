#pragma once
#include"Estrategia.h"
#include<iostream>
using std::string;
class Periferico :public Estrategia
{
private:
	char** tab;
	int filas;
	int columnas;
public:
	Periferico();
	~Periferico();
	virtual void jugada();
	string toString();
	void mover();
};