#include "Controladora.h"

Controladora::Controladora(){
	/*contenedorCampos = new ContenedorV();
	campoMatriz = new ContenedorM(contenedorCampos);*/
	campoAbs = new CampoResultante();
}

void Controladora::menuPrincipal(){
	int opcion;
	do {

		opcion = Vista::menuPrincipal();
		switch (opcion) {
		case 1:
			system("cls");

			break;
		default:
			exit(0);
		}

	} while (opcion != 1);
}

int Controladora::menuModalidad()
{
	int opcion;
	//do {

	opcion = Vista::menuModalidad();
	return opcion;
	//	switch (opcion) {
	//	case 1:

	//		break;
	//	case 2:

	//		break;
	//	default:
	//		break;
	//	}

	//} while (opcion != 2);
}

void Controladora::menuMatriz(){
	int opcion;
	do {
		opcion = Vista::menuMatriz();
		switch (opcion) {
		case 1:
			crea6puntos();
			break;
		case 2:
			crea9puntos();
			break;
		case 3:
			crea15puntos();
			break;
		case 4:
			MostrarCampoDeJuego();
			break;
		default:
			break;
		}
	} while (opcion != 4);
}

void Controladora::MostrarCampoDeJuego(){
	campoMatriz = new ContenedorM(campoAbs->retornaContenedor());
	//campoMatriz->llenarMatrizElementos();
	cout<<campoMatriz->toStirng();
}

void Controladora::menuModoJuego()
{
	int opcion;
	do {

		opcion = Vista::menuMatriz();
		switch (opcion) {
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		default:
			break;
		}

	} while (opcion != 5);
}

void Controladora::comenzarJuego(){
	int modalidad = 0;
	modalidad=menuModalidad();
	if (modalidad == 1) {

	}
}

void Controladora::crea6puntos(){
	CampoAbstracto* c;
	c = Vista::creandoMatriz6();
	campoAbs->ingresaCampo(c);
}

void Controladora::crea9puntos(){
	CampoAbstracto* c;
	c = Vista::creandoMatriz9();
	campoAbs->ingresaCampo(c);
}

void Controladora::crea15puntos(){
	CampoAbstracto* c;
	c = Vista::creandoMatriz15();
	campoAbs->ingresaCampo(c);
}
