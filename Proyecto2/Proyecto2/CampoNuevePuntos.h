#pragma once
#include "CampoAbstracto.h"


class CampoNuevePuntos:public CampoAbstracto{
private:
	string codigo;
	int fil, col;
	ElementosDeMatriz*** matrizNueve;
public:
	CampoNuevePuntos();
	virtual ~CampoNuevePuntos();
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
	string toString();
	virtual ElementosDeMatriz* retornarPos(int x, int y);
	int getCol();
};

