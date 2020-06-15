#include "Persona.h"


Persona::Persona(string nom, string ced):Observer(nom,ced) {
	nombre = nom;
	cedula = ced;
	codigoDeAcceso = 0;
}

Persona::~Persona() {
}

void Persona::actualizar(int cod) {
	codigoDeAcceso = cod;
}

string Persona::toString() {
	stringstream s;
	s << "\t\tNombre de Usuario: " << nombre << endl;
	s << "\t\tId: " << cedula << endl << endl;
	return s.str();
}
//
//void Persona::setSaldo(double sal) {
//	saldo = sal;
//}

void Persona::setCodigo(int cod) {
	codigoDeAcceso = cod;
}