#include "Conexion.h"


Conexion::~Conexion() {}

string Conexion::toString() {
	stringstream s;

	s << "---";

	return s.str();
}

string Conexion::toString2() {
	stringstream s;

	s << " ";

	return s.str();
}

void Conexion::setPosicionX(int px) {
	posicionX = px;
}

void Conexion::setPosicionY(char py) {
	posicionY = py;
}

void Conexion::setColor(string c) {
	color = c;
}

void Conexion::setTipo(string t) {
	tipo = t;
}

int Conexion::getPosicionX() {
	return posicionX;
}

char Conexion::getPosicionY() {
	return posicionY;
}

string Conexion::getColor() {
	return color;
}

string Conexion::getTipo() {
	return tipo;
}

void Conexion::cambColor(int X) {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), X);
}

string Conexion::nombClase() {
	return "Pieza";
}
