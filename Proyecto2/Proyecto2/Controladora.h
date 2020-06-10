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
	int menuModalidad();
	void menuMatriz();
	//void menuMatrizMixto();
	void menuModoJuego();
	void comenzarJuego();
	void crea6puntos();
	void crea9puntos();
	void crea15puntos();
};