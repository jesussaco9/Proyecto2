#pragma once
#include "CampoAbstracto.h"


class CampoQuincePuntos: public CampoAbstracto{
private:
	string codigo;
public:
	CampoQuincePuntos();
	virtual ~CampoQuincePuntos();
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
};


