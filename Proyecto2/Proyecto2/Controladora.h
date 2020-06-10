#pragma once
#include"Vista.h"
#include "ContenedorM.h"
#include "ContenedorV.h"
#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoSeisPuntos.h"
#include "CampoQuincePuntos.h"

class Controladora {
private:
	ContenedorM* campoMatriz;
	ContenedorV* contenedorCampos;
	CampoAbstracto* campoAbs;
public:
	Controladora();
	void menuPrincipal();
	void menuModalidad();
	void menuMatriz();
	void menuMatrizMixto();
	void menuModoJuego();
};