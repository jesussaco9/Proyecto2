#include "ContenedorM.h"

ContenedorM::ContenedorM(ContenedorV* vec, Lista<Coordenada>* _lista, int modo, Lista<Coordenada>* lcp) {
	cor1 = 0;
	cor2 = 0;
	inicio = 0;
	jugadaMX = 0;
	jugadaMY = 0;
	this->modo = modo;
	vector = vec;
	lista = _lista;
	listaPorPartida = lcp;
	contador1 = 0;
	contador2 = 0;
	inicia = 0;
	fin = 0;
	sigue = true;
	pasaInfoVectorMatriz();
	separador = "  ";
	mat = new ElementosDeMatriz** [fil];
	for (int i = 0; i < fil; i++) {
		mat[i] = new ElementosDeMatriz *[col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
				mat[i][j] = new ElementoVacio();
		}
	}
	llenarMatrizElementos();
}

ContenedorM::~ContenedorM(){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			delete mat[i][j];
		}
	}
	for (int i = 0; i < fil; i++) {
		delete[] mat[i];
	}
	delete[] mat;
}

void ContenedorM::pasaInfoVectorMatriz(){
		string tipo = "class CampoSeisPuntos";
		string tipo2 = "class CampoNuevePuntos";
		string tipo3 = "class CampoQuincePuntos";
		int varFil = 0;
		int varCol = 0;
		int cantM = vector->getCantidad();
		for (int i = 0; i < cantM; i++) {
			if (tipo == typeid(*vector->getCampoAbstracto(i)).name()) {
				if (vector->ultimaPosicionValida(i)) {
					if (varFil == 9) {
						varFil = 9;
					}
					else {
						varFil = 5;
					}
					varCol = varCol + 3;
				}
				else{
					if (varFil == 9) {
						varFil = 9;
					}
					else {
						varFil = 5;
					}
					varCol = varCol + 4;
				}
			}
			else if (tipo2 == typeid(*vector->getCampoAbstracto(i)).name()) {
				if (vector->ultimaPosicionValida(i)) {
					if (varFil == 9) {
						varFil = 9;
					}
					else {
						varFil = 5;
					}
					varCol = varCol + 5;
				}
				else{
					if (varFil == 9) {
						varFil = 9;
					}
					else {
						varFil = 5;
					}
					varCol = varCol + 6;
				}
			}
			else if (tipo3 == typeid(*vector->getCampoAbstracto(i)).name()) {
				varFil = 9;
				if (vector->ultimaPosicionValida(i)) {
					varCol = varCol + 5;
				}
				else{
					varCol = varCol + 6;
				}
			}
		}
		setFila(varFil);
		setCol(varCol);
}

void ContenedorM::llenarMatrizElementos(){
	int cantM = vector->getCantidad();
	string tipo = "class CampoSeisPuntos";
	string tipo2 = "class CampoNuevePuntos";
	string tipo3 = "class CampoQuincePuntos";
	int valC = 0;
	int contador = 0;
		for (int k = 0; k < cantM; k++) {
				if (tipo == typeid(*vector->getCampoAbstracto(k)).name()) {
					fin = fin + vector->getCampoAbstracto(k)->getCol();
					for (int i = 0; i < fil;i++) {
						for (inicia =this->getInicia(); inicia < fin; inicia++) {
							if (i < 5) {
								if ((i%2==0)&&(inicia%2==0)){
									mat[i][inicia] = new Punto();
								}
								else if ((i % 2 != 0) && (inicia % 2 != 0)){
									mat[i][inicia] = new CuadroGanador();
								}
								else {
									mat[i][inicia] = NULL;
								}
							}
							else{
								mat[i][inicia] = new ElementoVacio();
							}
						}
						setInicia(inicia);
						inicia = inicia - 4;
					}
					setFin(fin);
				}
				else if (tipo2 == typeid(*vector->getCampoAbstracto(k)).name()) {
					fin = fin + vector->getCampoAbstracto(k)->getCol();
					for (int i = 0; i < fil; i++) {
						for (inicia = this->getInicia(); inicia < fin; inicia++) {
							if (i < 5) {
								if ((i % 2 == 0) && (inicia % 2 == 0)) {
									mat[i][inicia] = new Punto();
								}
								else if ((i % 2 != 0) && (inicia % 2 != 0)) {
									mat[i][inicia] = new CuadroGanador();
								}
								else {
									mat[i][inicia] = NULL;
								}
							}
							else {
								mat[i][inicia] = new ElementoVacio();;
							}
						}
						setInicia(inicia);
						inicia = inicia - 6;
					}
					setFin(fin);
				}
				else if (tipo3 == typeid(*vector->getCampoAbstracto(k)).name()) {
					fin = fin + vector->getCampoAbstracto(k)->getCol();
					valC = fin;
					for (int i = 0; i < fil; i++) {
						for (inicia=this->getInicia(); inicia < fin; inicia++) {
							if (i < 9) {
								if ((inicia==valC-1)&&((i==6) || (i == 8) || (i == 5) || (i == 7))) {
									mat[i][inicia] = new ElementoVacio();
								}
								else if ((i % 2 == 0) && (inicia % 2 == 0)) {
									mat[i][inicia] = new Punto();
								}
								else if ((i % 2 != 0) && (inicia % 2 != 0)) {
									mat[i][inicia] = new CuadroGanador();
								}
								else {
									mat[i][inicia] = NULL;
								}
							}
							else {
								mat[i][inicia] = new ElementoVacio();
							}
						}
						setInicia(inicia);
						inicia = inicia - 6;
					}
					setFin(fin);
				}
		}
}

ElementosDeMatriz* ContenedorM::retornarPos(int x, int y){
	if (x >= 0 && x <= fil && y >= 0 && y <= col)
		return mat[x][y];
	else return NULL;
}

string ContenedorM::toStirng() const{
	stringstream s;
	cout <<"===================================================\n";
	cout << "\t\tColumnas\n";
	cout << "  ";
	for (int j = 0; j < col; j++) {
		if ((j + 1) < 10) {
			cout << "  "; cout << j + 1;
		}
		else{
			cout << " "; cout << j + 1;
		}
	}
	cout << endl;
	for (int i = 0; i < fil; i++) {

		if ((i + 1) < 10) {
			cout <<" "<< i + 1 << " ";
			for (int j = 0; j < col; j++) {
				if (mat[i][j] != NULL) {
					if (i % 2 == 0 && j % 2 == 0) {
						cout << mat[i][j]->toString2();
					}
					else if (mat[i][j] == NULL) {
						cout << "  ";
					}
					else if (i % 2 == 0) {
						cout << mat[i][j]->toString();
					}else if (i % 2 != 0 && j % 2 != 0) {
						cout << mat[i][j]->toString2();
					}
					else {
						cout << mat[i][j]->toString2();
					}
				}
				else{
					cout << "   ";
				}
			}
		}
		else{
			cout << i + 1;
			for (int j = 0; j < col; j++) {
				if (mat[i][j] != NULL) {
					if (i % 2 == 0 && j % 2 == 0) {
						cout << mat[i][j]->toString2();
					}
					else if (mat[i][j] == NULL) {
						cout << "  ";
					}
					else if (i % 2 == 0) {
						cout << mat[i][j]->toString();
					}
					else if (i % 2 != 0 && j % 2 != 0) {
						cout << mat[i][j]->toString2();
					}
					else {
						cout << mat[i][j]->toString2();
					}
				}
				else {
					cout << "  ";

				}
			}
		}
		cout<< endl;
	}
	if (modo == 1) {
		cout <<"\t\tPUNTOS"<<endl;
		cout << "Computadora=  " <<"["<< contador1 <<"]"<< "   Jugador2=  " << "[" << contador2 << "]" << endl;
		cout << "===================================================\n";
		return s.str();
	}
	else {
		cout << "\t\tPUNTOS" << endl;
		cout << "Jugador1=  " << "[" << contador1 << "]" << "   Jugador2=  " << "[" << contador2 << "]" << endl;
		cout << "===================================================\n";
		return s.str();
	}
	
}

bool ContenedorM::ingresaPunto(int x, int y){
	int a = x - 1, b = y - 1;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (a < fil && b < col) {
				if (i == a && j == b) {
					if (mat[i][j] == NULL) {
						mat[i][j] = new Conexion();
						Coordenada* cordenada = new Coordenada(i, j);
						listaPorPartida->agregarCoordenada(cordenada);
						return true;
					}
					else {
						cout << "No se puede agregar la conexion, introduzca una nueva coordenada..." << endl;
						system("pause");
						return false;
					}
				}
			}else {
				cout << "Excedio el limite de la matriz, introduzca una nueva coordenada..." << endl;
				system("pause");
				return false;
			}
			
		}
	}
}

bool ContenedorM::ingresaPuntoM(int x, int y){
	//ElementosDeMatriz* v = new Punto();
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if ((x == i) && (y == j)) {
				if (mat[i][j] == NULL) {
					mat[i][j] = new Conexion();
					this->setJugadaMX(i);
					this->setJugadaMY(j);
					Coordenada* cordenada = new Coordenada(i, j);
					listaPorPartida->agregarCoordenada(cordenada);
					return true;
				}
			}
		}
	}
	return false;
}

 
int ContenedorM::getFila(){
	return fil;
}

int ContenedorM::getColumna(){
	return col;
}

void ContenedorM::setFila(int fila){
	this->fil = fila;
}

void ContenedorM::setCol(int col){
	this->col = col;
}

int ContenedorM::getInicia(){
	return inicia;
}


int ContenedorM::getFin(){
	return fin;
}

void ContenedorM::setInicia(int i){
	this->inicia = i;
}

void ContenedorM::setFin(int f){
	this->fin = f;
}

bool ContenedorM::continuaJuego(){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (mat[i][j] == NULL) {
				return true;
			}
		}
	}
	return false;
}

bool ContenedorM::posicionVacia(int x,int y){
	ElementosDeMatriz* v= new Punto();
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (i==x-1 && j==y-1) {
				/*if (mat[i][j] == NULL) {*/
					if (mat[i][j] != v) {
						return true;
					}
				/*}*/
			}
		}
	}
	return false;
}

void ContenedorM::validaCuadroCerrado(int jugador){
	this->setSigue(false);
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if ((i % 2 != 0) && (j % 2 != 0)) {
				if (mat[i][j-1] != NULL) {
					if (mat[i-1][j] != NULL) {
						if (mat[i][j+1] != NULL) {
							if (mat[i+1][j]!=NULL) {
								if (jugador % 2 == 0) {
									if ((mat[i][j]->getNombreClase() != "Cuadro1")&&(mat[i][j]->getNombreClase() != "Cuadro2")&&(mat[i][j]->getNombreClase() != "ElementoVacio")) {
										mat[i][j] = new Cuadro1();
										contador1++;
										this->setSigue(true);

									}
								}
								else {
									if ((mat[i][j]->getNombreClase() != "Cuadro1") && (mat[i][j]->getNombreClase() != "Cuadro2") && (mat[i][j]->getNombreClase() != "ElementoVacio")) {
										mat[i][j] = new Cuadro2();
										contador2++;
										this->setSigue(true);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}



int ContenedorM::getContador1(){
	return contador1;
}

int ContenedorM::getContador2(){
	return contador2;
}

void ContenedorM::PosiblesJugadas(){	
		for (int i = 0; i < fil; i++) {
			for (int j = 0; j < col; j++) {
				if (mat[i][j] == NULL) {
					Coordenada* cordenada = new Coordenada(i, j);
					lista->agregarCoordenada(cordenada);
				}
			}
		}

}

void ContenedorM::setSigue(bool sig){
	sigue = sig;
}

bool ContenedorM::getSigue(){
	return sigue;
}

void ContenedorM::setCor1(int c1){
	this->cor1 = c1;
}

void ContenedorM::setCor2(int c2){
	this->cor2 = c2;
}

int ContenedorM::getCor1(){
	return cor1;
}

int ContenedorM::getCor2(){
	return cor2;
}

void ContenedorM::setInicio(int i)
{
	this->inicio=i;
}

int ContenedorM::getInicio()
{
	return inicio;
}

int ContenedorM::getJugadaMX(){
	return jugadaMX;
}

void ContenedorM::setJugadaMX(int x){
	this->jugadaMX = x;
}

int ContenedorM::getJugadaMY(){
	return jugadaMY;
}

void ContenedorM::setJugadaMY(int y){
	this->jugadaMY = y;
}

ContenedorV* ContenedorM::getContenedorV(){
	return vector;
}

Lista<Coordenada>* ContenedorM::getLista(){
	return lista;
}

void ContenedorM::limpiaMatriz(){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = NULL;
		}
	}
}




