#include "Controladora.h"
#include"Vista.h"
Controladora::Controladora()
{
	contenedorCampos = new ContenedorV();
	campoMatriz = new ContenedorM(contenedorCampos);
}

void Controladora::menuPrincipal()
{
	int opcion;
	do {

		opcion = Vista::menuPrincipal();
		switch (opcion) {
		case 1:
			system("cls");

			break;
		default:
			exit;
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

void Controladora::menuMatriz()
{
	int opcion;
	do {

		opcion = Vista::menuMatriz();
		switch (opcion) {
		case 1:
			CampoAbstracto * campo6 = Vista::creandoMatriz6();
			campoAbs->ingresaCampo(campo6);
			break;
		case 2:
			CampoAbstracto * campo9 = Vista::creandoMatriz9();
			campoAbs->ingresaCampo(campo9);
			break;
		case 3:
			CampoAbstracto * campo15 = Vista::creandoMatriz15();
			campoAbs->ingresaCampo(campo15);
			break;
		case 4:
			menuMatrizMixto();
			break;
		default:
			break;
		}

	} while (opcion != 4);
}

void Controladora::menuMatrizMixto()
{
	int opcion;
	do {

		opcion = Vista::menuMatrizMixto();
		switch (opcion) {
		case 1:
			CampoAbstracto * campo6 = Vista::creandoMatriz6();
			campoAbs->ingresaCampo(campo6);
			break;
		case 2:
			CampoAbstracto * campo9 = Vista::creandoMatriz9();
			campoAbs->ingresaCampo(campo9);
			break;
		case 3:
			CampoAbstracto * campo15 = Vista::creandoMatriz15();
			campoAbs->ingresaCampo(campo15);
			break;
		case 4:

			break;
		default:
			break;
		}

	} while (opcion != 4);
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

void Controladora::comenzarJuego()
{
	int modalidad = 0;
	modalidad=menuModalidad();
	if (modalidad == 1) {

	}
}
