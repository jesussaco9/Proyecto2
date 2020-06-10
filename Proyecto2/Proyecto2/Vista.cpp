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
	cout << "\t\t3. Salir";
	cout << "===================================================\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

int Vista::menuMatriz(){
	limpiaPantalla();
	cout << "===================================================\n";
	cout << "\t\tSeleccione el tamannio de matriz en que desea jugar:\n";
	cout << "\t\t1. Matriz(6 ptos) 3x2\n";
	cout << "\t\t2. Matriz(9 ptos) 3x3\n";
	cout << "\t\t3. Matriz(15 ptos) 3x5\n";
	cout << "\t\t4. Matriz mixta\n";
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
	cout << "\t\t6. Salir";
	cout << "===================================================\n";
	cout << "\t\tDigite la opcion:\n";
	cout << "\t\t-> "; return opcion();
	system("cls");
}

CampoSeisPuntos* Vista::creandoMatriz6()
{
	cout<<"Creando Matriz de 6 ptos..." << endl;
	return new CampoSeisPuntos();
}

CampoNuevePuntos* Vista::creandoMatriz9()
{
	cout << "Creando Matriz de 9 ptos..." << endl;
	return new CampoNuevePuntos();
}

CampoQuincePuntos* Vista::creandoMatriz15()
{
	cout << "Creando Matriz de 15 ptos..." << endl;
	return new CampoQuincePuntos();
}


