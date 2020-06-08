#include "Conexion.h"


Conexion::Conexion():ElementosDeMatriz(){
}

Conexion::~Conexion() {
	
}

string Conexion::toString() {
	stringstream s;

	s << "---";

	return s.str();
}

string Conexion::toString2() {
	stringstream s;

	s << " | ";

	return s.str();
}

void Conexion::setSeparadorHorizontal(string sepHorizontal){
	separadorHorizontal = sepHorizontal;
}

string Conexion::getSeparadorHorizontal(){
	return separadorHorizontal;
}

void Conexion::setPosicionX(int px) {
	posicionX = px;
}

void Conexion::setPosicionY(int py) {
	posicionY = py;
}

int Conexion::getPosicionX() {
	return posicionX;
}

int Conexion::getPosicionY() {
	return posicionY;
}


string Conexion::getTipo() {
	return tipo;
}

