#include "CampoSeisPuntos.h"

CampoSeisPuntos::CampoSeisPuntos()
	:CampoAbstracto(){
	codigo = "class CampoSeisPuntos";
	fil = 10;
	col = 4;
	matrizSeis = new ElementosDeMatriz * *[fil];
	for (int i = 0; i < fil; i++) {
		matrizSeis[i] = new ElementosDeMatriz * [col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			matrizSeis[i][j] = NULL;
		}
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (i < 5) {
				if (i % 2 == 0 && j % 2 == 0) {
					matrizSeis[i][j] = new Punto();
				}
				else {
					matrizSeis[i][j] = NULL;
				}
			}
			else {
				matrizSeis[i][j] = NULL;
			}
		}
	}
}

CampoSeisPuntos::~CampoSeisPuntos(){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			delete matrizSeis[i][j];
		}
	}
	for (int i = 0; i < fil; i++) {
		delete[] matrizSeis[i];
	}
	delete[] matrizSeis;
}

string CampoSeisPuntos::getCodigo(){
	return codigo;
}

string CampoSeisPuntos::toString(){
	stringstream s;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (matrizSeis[i][j] != NULL) {
				cout << matrizSeis[i][j]->toString2();
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	return s.str();
}

void CampoSeisPuntos::ingresaCampo(CampoAbstracto*){//No se desarrolla
}
