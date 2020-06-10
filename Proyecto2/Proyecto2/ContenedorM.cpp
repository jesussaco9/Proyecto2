#include "ContenedorM.h"

ContenedorM::ContenedorM(/*int f,int c,int cM*/ContenedorV* vec){
	vector = vec;
	fil = 0;
	col = 0;
	inicia = 0;
	fin = 0;
	pasaInfoVectorMatriz();
	separador = "  ";
	mat = new ElementosDeMatriz** [fil];
	for (int i = 0; i < fil; i++) {
		mat[i] = new ElementosDeMatriz *[col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
				mat[i][j] = NULL;
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
				if (varFil == 10) {
					varFil = 10;
				}
				else{
					varFil = 5;
				}
				varCol = varCol + 4;
			}
			else if (tipo2 == typeid(*vector->getCampoAbstracto(i)).name()) {
				if (varFil == 10) {
					varFil = 10;
				}
				else {
					varFil = 5;
				}
				varCol = varCol + 6;
			}
			else if (tipo3 == typeid(*vector->getCampoAbstracto(i)).name()) {
				varFil = 10;
				varCol = varCol + 6;
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

		for (int k = 0; k < cantM; k++) {
				if (tipo == typeid(*vector->getCampoAbstracto(k)).name()) {
					fin = fin + vector->getCampoAbstracto(k)->getCol();
					for (int i = 0; i < fil;i++) {
						for (inicia =this->getInicia(); inicia < fin; inicia++) {
							if (i < 5) {
								if ((i%2==0)&&(inicia%2==0)){
									mat[i][inicia] = new Punto();
								}
								else{
									mat[i][inicia] = NULL;
								}
							}
							else{
								mat[i][inicia] = NULL;
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
								else {
									mat[i][inicia] = NULL;
								}
							}
							else {
								mat[i][inicia] = NULL;
							}
						}
						setInicia(inicia);
						inicia = inicia - 6;
					}
					setFin(fin);
				}
				else if (tipo3 == typeid(*vector->getCampoAbstracto(k)).name()) {
					fin = fin + vector->getCampoAbstracto(k)->getCol();
					for (int i = 0; i < fil; i++) {
						for (inicia=this->getInicia(); inicia < fin; inicia++) {
							if (i < 10) {
								if ((i % 2 == 0) && (inicia % 2 == 0)) {
									mat[i][inicia] = new Punto();
								}
								else {
									mat[i][inicia] = NULL;
								}
							}
							else {
								mat[i][inicia] = NULL;
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
				if (i % 2 == 0 && j % 2 == 0) {
					if (mat[i][j] != NULL) {
						cout << mat[i][j]->toString2();
					}
					else {
						cout << "   ";
					}
				}
				else if (mat[i][j] == NULL){
						cout << "   ";
				}
				else{
						cout << "  " << mat[i][j]->toString();
				}

			}
		}
		cout<< endl;
	}
	cout << "===================================================\n";
	return s.str();
}

void ContenedorM::ingresaPunto(int x, int y){
	int a = x - 1, b = y - 1;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (i==a&&j==b) {
				mat[i][j] = new Conexion();
			}
		}
	}
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

//string ContenedorM::getSeparador(){
//	return separador;
//}
//
//void ContenedorM::setSeparador(string sepa){
//	this->separador = sepa;
//}

