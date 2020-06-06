#include "ContenedorM.h"

ContenedorM::ContenedorM(int f,int c,int cM){
	fil = f + 2;
	col = c;
	separador = "  ";
	mat = new string ** [fil];
	for (int i = 0; i < fil; i++) {
		mat[i] = new string*[col];
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

string ContenedorM::toStirng() const{
	stringstream s;
	cout <<"===================================================\n";
	cout << "\t\tColumnas\n";
	
	for (int j = 0; j < col; j++) {
		if ((j + 1) < 10) {
			cout << "    "; cout << j + 1;
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
		
				if (i % 2 == 0 && j % 2 == 1) {
					cout << "  +" << separador;
					if (j % 2 == 0) {
						cout << "  +" << separador;

					}
					else {
						cout << "   " << separador;
					}
				}
			}
		}
		else{
			cout << i + 1;
			for (int j = 0; j < col; j++) {
				
				if (i % 2 == 0 && j % 2 == 1) {
					cout << "  +" << separador;
					if (j % 2 == 0) {
						cout << "  +" << separador;

					}
					else {
						cout << "   " << separador;
					}
				}
			}
		}
		cout << endl << endl;
	}

	cout << "===================================================\n";
	return s.str();
}

void ContenedorM::ingresaPunto(int n, int, Conexion*){

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

string ContenedorM::getSeparador(){
	return separador;
}

void ContenedorM::setSeparador(string sepa){
	this->separador = sepa;
}

