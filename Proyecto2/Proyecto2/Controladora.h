#pragma once
<<<<<<< HEAD
#include"Vista.h"
#include "ContenedorM.h"
#include "ContenedorV.h"
#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoSeisPuntos.h"
#include "CampoQuincePuntos.h"

=======
#include"ContenedorM.h"
#include"ContenedorV.h"
#include"CampoAbstracto.h"
#include"CampoNuevePuntos.h"
#include"CampoSeisPuntos.h"
#include"CampoQuincePuntos.h"
>>>>>>> 292526e327c0c2fcfc7c23b7dce6403af3926a61
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
	void menuMatrizMixto();
	void menuModoJuego();
	void comenzarJuego();
};