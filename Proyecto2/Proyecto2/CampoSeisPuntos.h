#pragma once
#include "CampoAbstracto.h"

class CampoSeisPuntos: public CampoAbstracto{
private:
	string codigo;
	int fil, col;
	ElementosDeMatriz*** matrizSeis;
public:
	CampoSeisPuntos();
	virtual ~CampoSeisPuntos();
	string getCodigo();
	string toString();
	void ingresaCampo(CampoAbstracto*);
};

