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
#include "Cercano.h"
#include"Periferico.h"
#include"Central.h"
#include"Islas.h"
#include "Lista.h"
#include "Subject.h".
#include "Suscripcion.h"
#include "DiaYCodigo.h"
#include "GestorArchivos.h"
//#include "Partida.h"
class Controladora {
private:
	ContenedorM* campoMatriz;
	ContenedorV* contenedorCampos;
	CampoAbstracto* campoAbs;
	Estrategia* e;
	Estrategia* aux;
	Lista<Coordenada>* listaCoordenadas;
	Lista<Coordenada>* listaCoordenadasPorPartida;
	//Lista<Partida>* listaPartidas;
	Subject* SubjUsuarios;
	DiaYCodigo* dia;
	int cont;
	int cont2;
	int modalidad;
public:
	Controladora();
	void menuPrincipal();
	void menuJuego();
	void menuValidacion();
	int menuModalidad();
	void menuMatriz();
	void MostrarCampoDeJuego();
	int menuModoJuego();
	void creaCampo();
	void comenzarJuego();
	void crea6puntos();
	void crea9puntos();
	void crea15puntos();
	void creaModo(int);
	void crearUsuario();

	void guardar();
	void recuperar();
};

class Error {
private:
	string msj;
public:
	Error(string ms) :msj(ms) {

	}
	virtual ~Error() {

	}
	void porque() {
		cout << msj << endl;
		system("pause");
	}
};
