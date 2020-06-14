#include "Persona.h"


Persona::Persona(string nom, string ced, double sal) {
	nombre = nom;
	cedula = ced;
	saldo = sal;
	codigoDeAcceso = 0;
}

Persona::~Persona() {
}

void Persona::actualizar(int cod) {
	codigoDeAcceso = cod;
}

string Persona::toString() {
	stringstream s;
	s << "Nombre de Usuario: " << nombre << endl;
	s << "Id: " << cedula << endl;
	s << "Saldo: " << saldo << endl;
	if (codigoDeAcceso != 0) {
		s << "Codgo de Acceso: " << codigoDeAcceso << endl;
	}
	else {
		s << "El usuario no cuenta con codigo de acceso" << endl;
	}
	return s.str();
}

void Persona::setSaldo(double sal) {
	saldo = sal;
}

void Persona::setCodigo(int cod) {
	codigoDeAcceso = cod;
}