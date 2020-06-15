#pragma once
#include "CampoAbstracto.h"

class CampoAbstracto;

class ContenedorV {
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
	int inicializarPrimeraPosicion();
	CampoAbstracto* getCampoAbstracto(int);
	bool ultimaPosicionValida(int);
};

