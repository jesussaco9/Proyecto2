#include "Controladora.h"

Controladora::Controladora(){
	campoAbs = new CampoResultante();
	listaCoordenadas = new Lista<Coordenada>();
	cont = 0;
	modalidad = 0;
	SubjUsuarios = new Suscripcion();
	dia = new DiaYCodigo();
}

void Controladora::menuPrincipal() {
	int opcion;
	do {
		Vista::cargando();
		opcion = Vista::presentacionInicial(dia);
		switch (opcion) {
		case 1://Suscripcion
			system("cls");
			crearUsuario();
			break;
		case 2://Jugar
			system("cls");
			menuValidacion();
			break;
		case 3://Cargar partidas
			system("cls");
			break;
		case 4://Cambiar de dia
			dia->setCont();
			dia->setCodigo();
			menuPrincipal();
			system("cls");
			break;
		default:
			exit(0);
		}

	} while (opcion != 4);
}
void Controladora::menuJuego(){
	int opcion;
	do {
		Vista::cargando();
		opcion = Vista::menuPrincipal();
		switch (opcion) {
		case 1:
			system("cls");
			comenzarJuego();
			break;
		default:
			menuPrincipal();
		}

	} while (opcion != 1);
}

void Controladora::menuValidacion(){
	Observer* o;
	try{
		if (Vista::ValidaUsuario(SubjUsuarios) != NULL) {
			menuJuego();
		}
		else {
			throw Error("\tAcceso denegado, suscribase primero");
		}
	}
	catch (Error& e) {
		e.porque();
	}
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
	bool bandera = false;
	int modo=0;
	int auxCon = 1;
	modalidad=menuModalidad();
	if (modalidad == 1) {
		menuMatriz();
		campoMatriz->PosiblesJugadas();
		modo=menuModoJuego();
		creaModo(modo);
		
		while (campoMatriz->continuaJuego()) {
			if (cont % 2 == 0) {
				campoMatriz->setInicio(cont2);
				campoMatriz->setSigue(true);
				while ((campoMatriz->getSigue() == true)&&(campoMatriz->continuaJuego()==true)) {
					e = aux;
					if (e->jugada()) {
						Vista::textoMaquinaJugando();
						Sleep(2000);
						e->setCont(0);
						campoMatriz->validaCuadroCerrado(cont);
					}
					else {
						e = new Aleatorio(campoMatriz, listaCoordenadas);
						if (e->jugada()) {
							Vista::textoMaquinaJugando();
							Sleep(2000);
							aux->setCont(1);
							campoMatriz->validaCuadroCerrado(cont);
							cont2++;
						}
					}
					system("cls");
					MostrarCampoDeJuego();
				}
				cont2+=2;
			}
			else if (cont % 2 != 0) {
				campoMatriz->setSigue(true);
				while ((campoMatriz->getSigue() == true) && (campoMatriz->continuaJuego() == true)) {
					do {
						Vista::turnoJ2();
						Vista::coordenadas();
						int a = Vista::coordenada1();
						int b = Vista::coordenada2();
						campoMatriz->setCor1(a - 1);
						campoMatriz->setCor2(b - 1);
						if (campoMatriz->ingresaPunto(a, b)) {
							bandera = true;
						}
						else {
							bandera = false;
						}
						campoMatriz->validaCuadroCerrado(cont);
						system("cls");
						MostrarCampoDeJuego();
					} while (bandera == false);
					
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
					do {
						string color = "Azul";
						Vista::turnoJ1();
						Vista::coordenadas();
						int a = Vista::coordenada1();
						int b = Vista::coordenada2();
						if (campoMatriz->ingresaPunto(a, b)) {
							bandera = true;
						}
						else {
							bandera = false;
						}
						campoMatriz->validaCuadroCerrado(cont);
						system("cls");
						MostrarCampoDeJuego();
					} while (bandera==false);
				}
			}
			else if (cont % 2 != 0) {
				campoMatriz->setSigue(true);
				while ((campoMatriz->getSigue() == true) && (campoMatriz->continuaJuego() == true)) {
					do {
						string color = "Azul";
						Vista::turnoJ2();
						Vista::coordenadas();
						int a = Vista::coordenada1();
						int b = Vista::coordenada2();
						if (campoMatriz->ingresaPunto(a, b)) {
							bandera = true;
						}
						else {
							bandera = false;
						}
						campoMatriz->validaCuadroCerrado(cont);
						system("cls");
						MostrarCampoDeJuego();
					} while (bandera == false);
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
		aux = e;
		break;
	case 2:
		e = new Cercano(campoMatriz, listaCoordenadas);
		aux = e;
		break;
	case 3:
		e = new Periferico(campoMatriz, listaCoordenadas);
		aux = e;
		break;
	case 4:
		e = new Central(campoMatriz, listaCoordenadas);
		aux = e;
		break;
	case 5:
		e = new Islas(campoMatriz, listaCoordenadas);
		aux = e;
		break;
	case 6:
		menuMatriz();
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
		cont2 = 1;
		cont = 2;
	}
	else if (inicio == 2) {
		cont2 = 2;
		cont = 1;
	}
	MostrarCampoDeJuego();
}

void Controladora::crearUsuario(){
	Observer* u;
	bool respuesta;
	try
	{
		u = Vista::crearUsuario();
		respuesta = Vista::deseaPagar();
		if (respuesta) {
			if (u != NULL) {
				SubjUsuarios->agrega(u);
				Vista::SuscripcionExitosa();
				cout<<u->toString();
				Vista::pausa();
			}
			else {
				throw Error("\tNo se pudo realizar la Suscripcion");
			}
		}
		else{
			throw Error("\tNo se pudo realizar la Suscripcion");
		}
	}
	catch (Error& e) {
		e.porque();
	}
}
