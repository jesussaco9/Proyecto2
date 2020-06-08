#include "CampoNuevePuntos.h"

CampoNuevePuntos::CampoNuevePuntos()
:CampoAbstracto(){
	codigo = "class CampoNuevePuntos";
	fil = 10;
	col = 6;
	matrizNueve = new ElementosDeMatriz * *[fil];
	for (int i = 0; i < fil; i++) {
		matrizNueve[i] = new ElementosDeMatriz * [col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			matrizNueve[i][j] = NULL;
		}
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (i < 6) {
				if (i % 2 == 0 && j % 2 == 0) {
					matrizNueve[i][j] = new Punto();
				}
				else {
					matrizNueve[i][j] = NULL;
				}
			}
			else {
				matrizNueve[i][j] = NULL;
			}
		}
	}
}

CampoNuevePuntos::~CampoNuevePuntos(){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			delete matrizNueve[i][j];
		}
	}
	for (int i = 0; i < fil; i++) {
		delete[] matrizNueve[i];
	}
	delete[] matrizNueve;
}

string CampoNuevePuntos::getCodigo(){
	return codigo;
}

void CampoNuevePuntos::ingresaCampo(CampoAbstracto*){
}

string CampoNuevePuntos::toString(){
	stringstream s;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (matrizNueve[i][j] != NULL) {
				cout << matrizNueve[i][j]->toString2();
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	return s.str();
}

ElementosDeMatriz* CampoNuevePuntos::retornarPos(int x, int y){
	if (x >= 0 && x <= fil && y >= 0 && y <= col)
		return matrizNueve[x][y];
	else return NULL;
}

int CampoNuevePuntos::getCol(){
	return col;
}
