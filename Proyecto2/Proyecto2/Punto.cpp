#include "Punto.h"

Punto::Punto() /*:ElementosDeMatriz()*/ {
}

Punto::~Punto() {

}

string Punto::toString() {
	stringstream s;

	s << " ";

	return s.str();
}

string Punto::toString2() {
	stringstream s;

	s << " + ";

	return s.str();
}


void Punto::setPosicionX(int px) {
	posicionX = px;
}

void Punto::setPosicionY(int py) {
	posicionY = py;
}

int Punto::getPosicionX() {
	return posicionX;
}

int Punto::getPosicionY() {
	return posicionY;
}


string Punto::getNombreClase() {
	return "Punto";
}

void Punto::setGanador(string)
{
}

