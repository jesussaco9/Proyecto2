#include "Suscripcion.h"

Suscripcion::Suscripcion() {
	codigoDiario = 0;
	tam = 1;
	can = 0;
	vec = new Observer * [tam];
	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
}

Suscripcion::~Suscripcion() {
	for (int i = 0; i < can; i++) {
		delete vec[i];
	}
	delete[] vec;
}


void Suscripcion::notifica() {
	for (int i = 0; i < can; i++) {
		vec[i]->actualizar(codigoDiario);
	}
}

void Suscripcion::agrega(Observer* obs) {
	if (can < tam) {
		vec[can++] = obs;
	}
}


string Suscripcion::toString() {
	stringstream s;
	s << "----------Listado de Observers-------" << endl;
	for (int i = 0; i < can; i++) {
		s << vec[i]->toString() << endl;
	}
	return s.str();
}

int Suscripcion::getCodigoDiario() {
	return codigoDiario;
}

void Suscripcion::setCodigodiaro(int cod) {
	this->codigoDiario = cod;
}

Observer* Suscripcion::recuperaUsuario(string id){
	for (int i = 0; i < can; i++) {
		if (vec[i]->getId() == id) {
			return vec[i];
		}
	}
	return NULL;
}

