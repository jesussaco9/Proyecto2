#pragma once
#include "CampoAbstracto.h"


class CampoQuincePuntos: public CampoAbstracto{
private:
	string codigo;
	int fil, col;
public:
	CampoQuincePuntos();
	virtual ~CampoQuincePuntos();
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
	string toString();
	virtual ElementosDeMatriz* retornarPos(int x, int y);
	int getCol();
	ContenedorV* retornaContenedor();
};


