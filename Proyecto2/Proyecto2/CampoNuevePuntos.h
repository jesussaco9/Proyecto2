#pragma once
#include "CampoAbstracto.h"


class CampoNuevePuntos:public CampoAbstracto{
private:
	string codigo;
public:
	CampoNuevePuntos();
	virtual ~CampoNuevePuntos();
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
};

