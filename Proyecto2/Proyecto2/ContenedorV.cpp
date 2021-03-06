#include "ContenedorV.h"

ContenedorV::ContenedorV(){
	can = 0;
	tam = 20;
	vec = new CampoAbstracto * [tam];
	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
}

ContenedorV::~ContenedorV(){
	for (int i = 0; i < can; i++) {
		delete vec[i];
	}
	delete[] vec;
}

void ContenedorV::agregaCampo(CampoAbstracto* abs){
	if (can < tam) {
		vec[can++] = abs;
	}
}

int ContenedorV::getCantidad(){
	return can;
}

int ContenedorV::getTamano(){
	return tam;
}

int ContenedorV::inicializarPrimeraPosicion(){
	return 0;
}


bool ContenedorV::ultimaPosicionValida(int pos)
{
	if (pos == can - 1) {
		return true;
	}
	return false;
}

void ContenedorV::limpiaVector(){
	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
}

CampoAbstracto* ContenedorV::getCampoAbstracto(int pos){
	if (pos >= 0 && pos < can) {
		return vec[pos];
	}
	return NULL;
}
