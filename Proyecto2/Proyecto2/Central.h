#pragma once
#include"Estrategia.h"
#include<iostream>
using std::string;
class Central :public Estrategia
{
private:
	char** tab;
	int filas;
	int columnas;
public:
	Central();
	~Central();
	virtual bool jugada();
	string toString();
	void mover();
};