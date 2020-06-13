#include "Controladora.h"

Controladora::Controladora(){

	campoAbs = new CampoResultante();
	listaCoordenadas = new Lista();
	cont = 0;
	modalidad = 0;
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
			cout << "\t\tCreando matriz... Espere un momento" << endl;
			Sleep(1000);
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
	campoMatriz = new ContenedorM(campoAbs->retornaContenedor(),listaCoordenadas,modalidad);
}

void Controladora::comenzarJuego(){
	int modo=0;
	
	modalidad=menuModalidad();
	if (modalidad == 1) {
		menuMatriz();
		campoMatriz->PosiblesJugadas();
		modo=menuModoJuego();
		creaModo(modo);
		while (campoMatriz->continuaJuego()) {
			if (cont % 2 == 0) {
				string color = "Azul";
				campoMatriz->setSigue(true);
				while ((campoMatriz->getSigue() == true)&&(campoMatriz->continuaJuego()==true)) {
					if (e->jugada()) {
						cout << "Computadora realizando movimiento...Espere un momento" << endl;
						Sleep(3000);
						campoMatriz->validaCuadroCerrado(cont);
					}
					system("cls");
					MostrarCampoDeJuego();
				}
			}
			else if (cont % 2 != 0) {
				campoMatriz->setSigue(true);
				while ((campoMatriz->getSigue() == true) && (campoMatriz->continuaJuego() == true)) {
					string color = "Rojo";
					Vista::turnoJ2;
					Vista::coordenadas();
					int a = Vista::coordenada1();
					int b = Vista::coordenada2();
					campoMatriz->ingresaPunto(a, b);
					campoMatriz->validaCuadroCerrado(cont);
					system("cls");
					MostrarCampoDeJuego();
				}
			}
			cont++;
		}
		if (campoMatriz->continuaJuego() == false) {
			if (campoMatriz->getContador1() > campoMatriz->getContador2()) {
				Vista::textoGanoJugador1();
			}
			else if (campoMatriz->getContador1() < campoMatriz->getContador2()){
				Vista::textoGanoJugador2();
			}
			else{
				Vista::textoJuegoEmpatado();
			}
			Vista::textoGraciasPorJugar();
		}
	}
	else if (modalidad == 2) {
		menuMatriz();
		int inicio = 0;
		inicio = Vista::primerMov2();
		system("pause");
		int cont = 0;
		if (inicio == 1) {
			cont = 2;
		}
		else if (inicio == 2) {
			cont = 1;
		}
		MostrarCampoDeJuego();
		while (campoMatriz->continuaJuego()) {
			if (cont % 2 == 0) {
				campoMatriz->setSigue(true);
				while ((campoMatriz->getSigue() == true) && (campoMatriz->continuaJuego() == true)) {
					string color = "Azul";
					Vista::turnoJ1();
					Vista::coordenadas();
					int a = Vista::coordenada1();
					int b = Vista::coordenada2();
					campoMatriz->ingresaPunto(a, b);
					campoMatriz->validaCuadroCerrado(cont);
					system("cls");
					MostrarCampoDeJuego();
				}
			}
			else if (cont % 2 != 0) {
				campoMatriz->setSigue(true);
				while ((campoMatriz->getSigue() == true) && (campoMatriz->continuaJuego() == true)) {
					string color = "Rojo";
					Vista::turnoJ2();
					Vista::coordenadas();
					int a = Vista::coordenada1();
					int b = Vista::coordenada2();
					campoMatriz->ingresaPunto(a, b);
					campoMatriz->validaCuadroCerrado(cont);
					system("cls");
					MostrarCampoDeJuego();
				}
			}
			cont++;
		}
		if (campoMatriz->continuaJuego() == false) {
			if (campoMatriz->getContador1() > campoMatriz->getContador2()) {
				Vista::textoGanoJugador1();
			}
			else if (campoMatriz->getContador1() < campoMatriz->getContador2()) {
				Vista::textoGanoJugador2();
			}
			else {
				Vista::textoJuegoEmpatado();
			}
			Vista::textoGraciasPorJugar();
			//Vista::ganador();
			//system("pause");
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

void Controladora::creaModo(int estrategia) {

	int opcion = estrategia;
	switch (opcion)
	{
	case 1:
		e = new Aleatorio(campoMatriz, listaCoordenadas);
		break;
	case 2:
		e = new Cercano();
		break;
	case 3:
		e = new Periferico();
		break;
	case 4:
		e = new Central();
		break;
	case 5:
		e = new Islas();
		break;
	default:
		break;
	}
	e->setFilas(campoMatriz->getFila());
	e->setColumnas(campoMatriz->getColumna());
	int inicio = 0;
	inicio = Vista::primerMov();
	system("pause");
	if (inicio == 1) {
		cont = 2;
	}
	else if (inicio == 2) {
		cont = 1;
	}
	MostrarCampoDeJuego();
}
