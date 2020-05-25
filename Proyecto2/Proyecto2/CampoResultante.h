#pragma once
#include "CampoAbstracto.h"

class CampoResultante:public CampoAbstracto{
private:
	string codigo;
public:
	CampoResultante(string codigo="" );
	virtual ~CampoResultante();
	string getCodigo();
	//ContenedorV* ConPtr();
	//void ingresaCampo(CampoAbstracto*);
	//ContenedorV* retornaContenedor();
};

