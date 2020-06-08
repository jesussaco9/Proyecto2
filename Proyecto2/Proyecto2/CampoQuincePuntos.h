#pragma once
#include "CampoAbstracto.h"


class CampoQuincePuntos: public CampoAbstracto{
private:
	string codigo;
	int fil, col;
	ElementosDeMatriz*** matrizQuince;
public:
	CampoQuincePuntos();
	virtual ~CampoQuincePuntos();
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
	string toString();
};


