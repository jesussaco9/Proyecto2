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
#include "Lista.h"

class Controladora {
private:
	ContenedorM* campoMatriz;
	ContenedorV* contenedorCampos;
	CampoAbstracto* campoAbs;
	Aleatorio* a;
	Lista* listaCoordenadas;
public:
	Controladora();
	void menuPrincipal();
	int menuModalidad();
	void menuMatriz();
	//void menuMatrizMixto();
	void MostrarCampoDeJuego();
	int menuModoJuego();
	void creaCampo();
	void comenzarJuego();
	void crea6puntos();
	void crea9puntos();
	void crea15puntos();
	void creaModoAleatorio();
};