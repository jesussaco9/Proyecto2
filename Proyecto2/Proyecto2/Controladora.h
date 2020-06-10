#pragma once

#include"Vista.h"
#include "ContenedorM.h"
#include "ContenedorV.h"
#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoSeisPuntos.h"
#include "CampoQuincePuntos.h"
#include "CampoResultante.h"
#include "Aleatorio.h"

class Controladora {
private:
	ContenedorM* campoMatriz;
	ContenedorV* contenedorCampos;
	CampoAbstracto* campoAbs;
	Aleatorio* a;
public:
	Controladora();
	void menuPrincipal();
	int menuModalidad();
	void menuMatriz();
	//void menuMatrizMixto();
	void MostrarCampoDeJuego();
	int menuModoJuego();
	void comenzarJuego();
	void crea6puntos();
	void crea9puntos();
	void crea15puntos();
	void creaModoAleatorio();
};