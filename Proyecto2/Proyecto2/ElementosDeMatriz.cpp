#include "ElementosDeMatriz.h"

ElementosDeMatriz::ElementosDeMatriz()
{
}

ElementosDeMatriz::~ElementosDeMatriz()
{
}

void ElementosDeMatriz::setPosicionX(int px) {
	posicionX = px;
}

void ElementosDeMatriz::setPosicionY(int py) {
	posicionY = py;
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