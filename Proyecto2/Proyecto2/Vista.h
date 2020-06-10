//#include <iostream>
//#include <sstream>

#include"CampoAbstracto.h"
#include"CampoNuevePuntos.h"
#include"CampoSeisPuntos.h"
#include"CampoQuincePuntos.h"
using namespace std;

class Vista{

public:
	static void limpiaPantalla();
	static int opcion();
	static int menuPrincipal();
	static int menuModalidad();
	static int menuMatriz();
	static int menuMatrizMixto();
	static int menuModoJuego();
	static CampoAbstracto* creandoMatriz6();
	static CampoAbstracto* creandoMatriz9();
	static CampoAbstracto* creandoMatriz15();
};

