#include "Controladora.h"

Controladora::Controladora(){
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

			break;
		default:
			exit;
		}

	} while (opcion != 1);
}

void Controladora::menuModalidad()
{
	int opcion;
	do {

		opcion = Vista::menuModalidad();
		switch (opcion) {
		case 1:

			break;
		case 2:

			break;
		default:
			break;
		}

	} while (opcion != 2);
}

void Controladora::menuMatriz(){
	int opcion;
	do {

		opcion = Vista::menuMatriz();
		switch (opcion) {
		case 1:
			CampoAbstracto* campo6 = new CampoSeisPuntos();
			campoAbs->ingresaCampo(campo6);
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

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
