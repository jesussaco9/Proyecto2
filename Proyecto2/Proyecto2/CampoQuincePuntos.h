#pragma once
#include "CampoAbstracto.h"


class CampoQuincePuntos: public CampoAbstracto{
private:
	string codigo;
public:
	CampoQuincePuntos(string codigo ="");
	virtual ~CampoQuincePuntos();
	string getCodigo();
};


