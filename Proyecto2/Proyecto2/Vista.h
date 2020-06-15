//#include <iostream>
//#include <sstream>

#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoSeisPuntos.h"
#include "CampoQuincePuntos.h"
#include "Observer.h"
#include "Persona.h"
#include "DiaYCodigo.h"
#include "Subject.h"
using namespace std;

class Vista{
public:

	static void limpiaPantalla();
	static int opcion();
	static string pedirCadena();
	static void cargando();
	static int presentacionInicial(DiaYCodigo*);
	static int menuPrincipal();
	static int menuModalidad();
	static int menuMatriz();
	static int menuMatrizMixto();
	static int menuModoJuego();
	static int primerMov();
	static int primerMov2();
	static void turnoJ1();
	static void turnoJ2();
	static int coordenada1();
	static int coordenada2();
	static void textoGanoJugador1();
	static void textoGanoJugador2();
	static void textoJuegoEmpatado();
	static void textoGraciasPorJugar();
	static void coordenadas();
	static void ganador();
	static CampoAbstracto* creandoMatriz6();
	static CampoAbstracto* creandoMatriz9();
	static CampoAbstracto* creandoMatriz15();
	static Observer* crearUsuario();
	static Observer* ValidaUsuario(Subject*);
	static bool deseaPagar();
	static void SuscripcionExitosa();
	static void pausa();
};

