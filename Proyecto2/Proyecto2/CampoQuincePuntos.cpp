#include "CampoQuincePuntos.h"

CampoQuincePuntos::CampoQuincePuntos():
	CampoAbstracto(){
	codigo = "class CampoQuincePuntos";
	fil = 10;
	col = 6;
	matrizQuince = new ElementosDeMatriz * *[fil];
	for (int i = 0; i < fil; i++) {
		matrizQuince[i] = new ElementosDeMatriz * [col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			matrizQuince[i][j] = NULL;
		}
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (i < 10) {
				if (i % 2 == 0 && j % 2 == 0) {
					matrizQuince[i][j] = new Punto();
				}
				else {
					matrizQuince[i][j] = NULL;
				}
			}
			else {
				matrizQuince[i][j] = NULL;
			}
		}
	}
}

CampoQuincePuntos::~CampoQuincePuntos(){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			delete matrizQuince[i][j];
		}
	}
	for (int i = 0; i < fil; i++) {
		delete[] matrizQuince[i];
	}
	delete[] matrizQuince;
}

string CampoQuincePuntos::getCodigo(){
	return codigo;
}

void CampoQuincePuntos::ingresaCampo(CampoAbstracto*)
{
}

string CampoQuincePuntos::toString(){
	stringstream s;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (matrizQuince[i][j] != NULL) {
				cout << matrizQuince[i][j]->toString2();
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	return s.str();
}

ElementosDeMatriz* CampoQuincePuntos::retornarPos(int x, int y){
	if (x >= 0 && x <= fil && y >= 0 && y <= col)
		return matrizQuince[x][y];
	else return NULL;
}

int CampoQuincePuntos::getCol(){
	return col;
}

ContenedorV* CampoQuincePuntos::retornaContenedor(){//No se desarrolla
	return nullptr;
}
