#pragma once
#include"Estrategia.h"
class Islas: public Estrategia{
private:
	ContenedorM* tab;
	Lista<Coordenada>* lis;
	int filas;
	int columnas;
	int cont;
public:
	Islas(ContenedorM*, Lista<Coordenada>*);
	~Islas();
	virtual bool jugada();
	string toString();
	void mover();
	void setFilas(int);
	void setColumnas(int);
	void setCont(int);
};

