#pragma once
#include "CampoAbstracto.h"
#include "ContenedorV.h"

class CampoResultante:public CampoAbstracto{
private:
	string codigo;
	ContenedorV* ConPtr;
public:
	CampoResultante(string codigo="" );
	virtual ~CampoResultante();
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
	ContenedorV* retornaContenedor();
};

