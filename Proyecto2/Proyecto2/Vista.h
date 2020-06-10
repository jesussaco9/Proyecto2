#include <iostream>
#include <sstream>

#include"Controladora.h"
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
	static CampoSeisPuntos* creandoMatriz6();
	static CampoNuevePuntos* creandoMatriz9();
	static CampoQuincePuntos* creandoMatriz15();
};

