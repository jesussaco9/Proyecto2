#pragma once
#include"Estrategia.h"
class Islas: public Estrategia
{
public:
	Islas();
	~Islas();
	virtual bool jugada();
	string toString();
	void mover();
	void setFilas(int);
	void setColumnas(int);
};

