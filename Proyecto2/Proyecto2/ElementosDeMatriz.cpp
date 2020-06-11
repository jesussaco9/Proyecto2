#include "ElementosDeMatriz.h"

ElementosDeMatriz::ElementosDeMatriz(){
}

ElementosDeMatriz::~ElementosDeMatriz(){
}

void ElementosDeMatriz::setPosicionX(int px) {
	posicionX = px;
}

void ElementosDeMatriz::setPosicionY(int py){
	posicionY = py;
}

void ElementosDeMatriz::setGanador(string){
}

void ElementosDeMatriz::setGanador2(string)
{
}

string ElementosDeMatriz::getGanador(){
	return string();
}

int ElementosDeMatriz::getPosicionX() {
	return posicionX;
}

int ElementosDeMatriz::getPosicionY() {
	return posicionY;
}


string ElementosDeMatriz::getTipo() {
	return tipo;
}

string ElementosDeMatriz::getNombreClase()
{
	return string();
}
