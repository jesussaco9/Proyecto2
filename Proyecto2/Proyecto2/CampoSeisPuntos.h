#pragma once
#include "CampoAbstracto.h"

class CampoSeisPuntos: public CampoAbstracto{
private:
	string codigo;
public:
	CampoSeisPuntos(string codigo = "");
	virtual ~CampoSeisPuntos();
	string getCodigo();
};

