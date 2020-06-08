#pragma once
#include "CampoAbstracto.h"
#include "ContenedorV.h"

class CampoResultante:public CampoAbstracto{
private:
	string codigo;
	ContenedorV* vector;
public:
	CampoResultante();
	virtual ~CampoResultante();
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
	ContenedorV* retornaContenedor();
	string toString();
	ElementosDeMatriz* retornarPos(int x, int y);
	int getCol();
};

