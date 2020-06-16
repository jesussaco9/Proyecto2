#pragma once
#include "CampoAbstracto.h"

class CampoSeisPuntos: public CampoAbstracto{
private:
	string codigo;
	int fil;
	int col;
public:
	CampoSeisPuntos();
	virtual ~CampoSeisPuntos();
	string getCodigo();
	string toString();
	ElementosDeMatriz* retornarPos(int x, int y);
	void ingresaCampo(CampoAbstracto*);
	int getCol();
	ContenedorV* retornaContenedor();
	virtual void limpiaVector();
};

