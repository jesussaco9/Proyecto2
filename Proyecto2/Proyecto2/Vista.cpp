#include "Vista.h"


void Vista::limpiaPantalla(){
	system("cls");
}

int Vista::opcion(){
	int n;
	while (true) {
		if (cin >> n) {
			cin.clear();
			cin.ignore(1024, '\n');
			return n;
		}
		else {
			cout << "Por favor digite un dato numerico" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			system("pause");
		}
	}
}

string Vista::pedirCadena() {
	string cad;
	getline(cin, cad);
	return cad;
	cin.clear();
}

void Vista::cargando(){
	cout << endl << endl << endl << endl;
	cout << "\t\tCargando "; Sleep(200);
	cout << " * "; Sleep(300);
	cout << " * "; Sleep(300);
	cout << " * "; Sleep(300);
	system("cls");
}
int Vista::presentacionInicial(DiaYCodigo* d) {
	cout << "===================================================\n";
	cout << "\t\tBienvenido(a) a Dots\n";
	cout << "===================================================\n";
	cout << "\t\t1.Suscribirse			 Dia de la Semana:\n"; 
	cout << "\t\t2.Jugar partida de Dots          "; cout << d->getDia(); cout << endl;
	cout << "\t\t3.Cargar Partidas Guardadas      Codigo de acceso del dia:\n";
	cout << "\t\t4.Cambiar dia				  "; cout << d->getCodigo(); cout << endl;
	cout << "\t\t5.Salir del juego\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

int Vista::menuPrincipal(){
	cout << "===================================================\n";
	cout << "\t\tBienvenido(a) a Dots\n";
	cout << "===================================================\n";
	cout << "\t\t1.Iniciar Partida\n";
	cout << "\t\t2.Salir\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

int Vista::menuModalidad(){
	limpiaPantalla();
	cout << "===================================================\n";
	cout << "\t\tSeleccione la modalidad deseada:\n";
	cout << "\t\t1. Persona vs Computadora\n";
	cout << "\t\t2. Persona vs Persona\n";
	cout << "\t\t3. Salir\n";
	cout << "===================================================\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

int Vista::menuMatriz(){
	limpiaPantalla();
	cout << "===================================================\n";
	cout << "\t\tSeleccione el tamannio de matriz en que desea jugar:\n";
	cout << "\t\tNota: Puuede agregar varias opciones 1, 2 o 3 \n";
	cout << "\t\t	   o si desea solo agrega una opcion.\n";
	cout << "\t\t1. Matriz(6 ptos) 3x2\n";
	cout << "\t\t2. Matriz(9 ptos) 3x3\n";
	cout << "\t\t3. Matriz(15 ptos) 5x3\n";
	cout << "\t\t4. Jugar\n";
	cout << "\t\t5. Regresar\n";
	cout << "===================================================\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

int Vista::menuMatrizMixto(){
	limpiaPantalla();
	cout << "===================================================\n";
	cout << "\t\tSeleccione el tamannio de matriz en que desea jugar:\n";
	cout << "\t\t1. Matriz(6 ptos) 3x2\n";
	cout << "\t\t2. Matriz(9 ptos) 3x3\n";
	cout << "\t\t3. Matriz(15 ptos) 5x3\n";
	cout << "\t\t4. Crear\n";
	cout << "===================================================\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

int Vista::menuModoJuego(){
	limpiaPantalla();
	cout << "===================================================\n";
	cout << "\t\tSeleccione el modo de juego que desea:\n";
	cout << "\t\t1. Juego Aleatorio \n";
	cout << "\t\t2. Juego Cercano\n";
	cout << "\t\t3. Juego Periferico\n";
	cout << "\t\t4. Juego Central\n";
	cout << "\t\t5. Juego Islas\n";
	cout << "\t\t6. Salir\n";
	cout << "===================================================\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

int Vista::primerMov(){
	limpiaPantalla();
	cout << "===================================================\n";
	cout << "\t\tSeleccione el Jugador que inicia la partida:\n";
	cout << "\t\t1. Computadora \n";
	cout << "\t\t2. Jugador 2 \n";
	cout << "===================================================\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

int Vista::primerMov2() {
	limpiaPantalla();
	cout << "===================================================\n";
	cout << "\t\tSeleccione el Jugador que inicia la partida:\n";
	cout << "\t\t1. Jugador 1 \n";
	cout << "\t\t2. Jugador 2 \n";
	cout << "===================================================\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}
void Vista::turnoJ1()
{
	cout << "Turno Jugador 1" << endl;
}
void Vista::turnoJ2()
{
	cout << "Turno Jugador 2" << endl;
}
int Vista::coordenada1(){
	int n;
	cout << "Ingreso el primer numero[FILA]" << endl;
	cout << "-> "; cin >> n;
	return n;
}

int Vista::coordenada2(){
	int n;
	cout << "Ingreso el segundo numero[COLUMNA]" << endl;
	cout << "-> "; cin >> n;
	return n;
	return 0;
}

void Vista::textoGanoJugador1(){
	cout << "    ¡¡¡Felicidades!!!   " << endl;
	cout << "El Ganador fue el jugador #1" << endl;
	system("pause");
}

void Vista::textoGanoJugador2(){
	cout << "    ¡¡¡Felicidades!!!   " << endl;
	cout << "El Ganador fue el jugador #2" << endl;
	system("pause");
}

void Vista::textoJuegoEmpatado(){
	cout << "El juego termino Empatado  :-(" << endl;
	system("pause");
}

void Vista::textoGraciasPorJugar(){
	cout << "    ¡Gracias por Jugar!" << endl;
	system("pause");
}

void Vista::coordenadas(){
	cout << "===================================================\n";
	cout << "Ingrese las coordenadas de la posicion: [fila][columna]\n";
}

void Vista::ganador(){
	cout << "Ya hay ganador...\n";
}

CampoAbstracto* Vista::creandoMatriz6(){
	CampoAbstracto* c;
	cout<<"Creando Matriz de 6 ptos..." << endl;
	c = new CampoSeisPuntos();
	return c;
}

CampoAbstracto* Vista::creandoMatriz9(){
	CampoAbstracto* c;
	cout << "Creando Matriz de 9 ptos..." << endl;
	c = new CampoNuevePuntos();
	return c;
}

CampoAbstracto* Vista::creandoMatriz15(){
	CampoAbstracto* c;
	cout << "Creando Matriz de 15 ptos..." << endl;
	c = new CampoQuincePuntos();
	return c;
}

Observer* Vista::crearUsuario(){
	limpiaPantalla();
	Observer* usuario;
	string nombre,id;
	cout << "===================================================\n";
	cout << "\t\tSuscripcion\n";
	cout << "===================================================\n";
	cout << "\t\tIngrese la identificacion del usuario\n";
	cout << "\t\t-> "; id = pedirCadena();
	cout << "\t\tIngrese el nombre del usuario\n";
	cout << "\t\t-> "; nombre = pedirCadena();
	system("cls");
	usuario = new Persona(nombre,id);
	return usuario;
}

Observer* Vista::ValidaUsuario(Subject* sub){
	Observer* usuario;
	Subject* s;
	string ced;
	cout << "===================================================\n";
	cout << "\t\tIngrese la cedula del usuario:\n";
	cout << "\t\t***Ya debe estar Subscrito***\n";
	cout << "===================================================\n";
	cout << "\t\t-> "; ced = pedirCadena();
	usuario = sub->recuperaUsuario(ced);
	if (usuario != NULL) {
		return usuario;
	}
	else
	{
		return NULL;
	}
}

bool Vista::deseaPagar(){
	bool bandera = false;
	string respuesta;
	cout << "===================================================\n";
	cout << "\t\tDesea pagar 500 colones para suscribirse?\n";
	cout << "\t\tSi lo desea ingrese S, de lo contrario ingrese N\n";
	cout << "\t\t-> "; cin >>respuesta;
	if (respuesta == "S" || respuesta == "s") {
		bandera = true;
	}
	else{
		bandera = false;
	}
	return bandera;
}

void Vista::SuscripcionExitosa(){
	cout << "\t\tSuscripcion realizada con exito!!!\n";
	cout << endl;
}

void Vista::pausa(){
	system("pause");
}




