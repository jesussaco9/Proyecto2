#pragma once
#include "CampoAbstracto.h"


class CampoNuevePuntos:public CampoAbstracto{
private:
	string codigo;
public:
	CampoNuevePuntos(string codigo = "");
	virtual ~CampoNuevePuntos();
	string getCodigo();
};

