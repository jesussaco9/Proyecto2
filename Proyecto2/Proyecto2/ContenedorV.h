#pragma once
#include "CampoAbstracto.h"

class ContenedorV{
private:
	int can;
	int tam;
	CampoAbstracto** vec;
public:
	ContenedorV();
	virtual ~ContenedorV();
	void agregaCampo(CampoAbstracto*);
	int getCantidad();
	int getTamano();
	CampoAbstracto* getCampoAbstracto(int);
};

