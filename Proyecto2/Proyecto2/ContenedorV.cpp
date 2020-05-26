#include "ContenedorV.h"

ContenedorV::ContenedorV(int tam){
	can = 0;
	tam = tam;
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

CampoAbstracto** ContenedorV::getCampoAbstracto(){
	return vec;
}
