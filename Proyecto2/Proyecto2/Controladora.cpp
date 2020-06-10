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
			comenzarJuego();
			break;
		default:
			exit(0);
		}

	} while (opcion != 1);
}

int Controladora::menuModalidad(){
	int opcion;
	opcion = Vista::menuModalidad();
	return opcion;	
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
			creaCampo();
			cout << "creando matriz..." << endl;
			MostrarCampoDeJuego();
			system("pause");
			break;
		default:
			break;
		}
	} while (opcion != 4);
}

void Controladora::MostrarCampoDeJuego(){
	cout<<campoMatriz->toStirng();
}

int Controladora::menuModoJuego(){
	int opcion;
	opcion = Vista::menuModoJuego();
	return opcion;
}

void Controladora::creaCampo(){
	campoMatriz = new ContenedorM(campoAbs->retornaContenedor());
}

void Controladora::comenzarJuego(){
	int modalidad = 0, modo=0;
	int f, c;
	modalidad=menuModalidad();
	if (modalidad == 1) {
		menuMatriz();
		modo=menuModoJuego();
		if (modo == 1) {
			creaModoAleatorio();
			a->setFilas(campoMatriz->getFila());
			a->setColumnas(campoMatriz->getColumna());
			int inicio = 0;
			inicio = Vista::primerMov();
			system("pause");
			int cont=0;
			if (inicio == 1) {
				cont = 2;
			}
			else if (inicio == 2) {
				cont = 1;
			}
			MostrarCampoDeJuego();

			while (campoMatriz->continuaJuego()) {
				if (cont % 2 == 0) {
					string color = "Blanco";
					a->jugada();

					system("cls");
					MostrarCampoDeJuego();
				}
				else if (cont % 2 != 0) {
					string color = "Negro";
					Vista::coordenadas();
					int a, b;
					cin >> a; cin >> b;
					campoMatriz->ingresaPunto(a, b);
					system("cls");
					MostrarCampoDeJuego();
				}
				cont++;
			}
			if (campoMatriz->continuaJuego() == false) {
				Vista::ganador();
				system("pause");
			}
		}
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

void Controladora::creaModoAleatorio(){
	a = new Aleatorio(campoMatriz);
}
