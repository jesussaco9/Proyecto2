#pragma once
#include "CampoAbstracto.h"

class CampoSeisPuntos: public CampoAbstracto{
private:
	string codigo;
public:
	CampoSeisPuntos();
	virtual ~CampoSeisPuntos();
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
};

