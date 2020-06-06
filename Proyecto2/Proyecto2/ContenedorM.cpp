#include "ContenedorM.h"

ContenedorM::ContenedorM(int f,int c,int cM){
	fil = f + 2;
	col = c;
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

void ContenedorM::llenarMatrizElementos(){
	for (int i = 0; i < fil; i++) {
			for (int j = 0; j < col; j++) {
				if (i % 2 == 0 && j % 2 == 0) {
						mat[i][j] = new Punto();
				}
				else {
					//mat[i][j] = new Conexion();
					mat[i][j] = NULL;
				}
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
	
	for (int j = 0; j < col; j++) {
		if ((j + 1) < 10) {
			cout << "   "; cout << j + 1;
		}
		else{
			cout << "   "; cout << j + 1;
		}
	}
	cout << endl;
	for (int i = 0; i < fil; i++) {

		if ((i + 1) < 10) {
			cout <<" "<< i + 1;
			for (int j = 0; j < col; j++) {
				if (i % 2 == 0 && j % 2 == 0) {
					cout <<"  "<< mat[i][j]->toString2();
				}
				else if (mat[i][j]==NULL) {
					cout << "    " ;
				} else{
					cout << "  " << mat[i][j]->toString();
				}
			}
		}
		else{
			cout << i + 1;
			for (int j = 0; j < col; j++) {
				if (i % 2 == 0 && j % 2 == 0) {
					cout << mat[i][j]->toString2() << "   ";
				}
				else if (mat[i][j] == NULL){
						cout << "    ";
				}
				else{
						cout << "  " << mat[i][j]->toString();
				}

			}
		}
		cout << endl << endl;
	}

	cout << "===================================================\n";
	return s.str();
}

void ContenedorM::ingresaPunto(int x, int y){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if ((x - 1 == 0) && (y - 1 == 2)) {
				mat[0][1] = new Conexion();
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

//string ContenedorM::getSeparador(){
//	return separador;
//}
//
//void ContenedorM::setSeparador(string sepa){
//	this->separador = sepa;
//}

