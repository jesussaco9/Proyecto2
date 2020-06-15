#pragma once
#include"Estrategia.h"
#include<iostream>
#include<algorithm>
using std::string;
class Central :public Estrategia{

private:
	ContenedorM* tab;
	Lista<Coordenada>* lis;
	int filas;
	int columnas;
	int limite1;
	int limite2;
public:
	Central(ContenedorM* m, Lista<Coordenada>* l);
	~Central();
	virtual bool jugada();
	string toString();
	void mover();
	void setFilas(int);
	void setColumnas(int);
	void setCont(int);
};