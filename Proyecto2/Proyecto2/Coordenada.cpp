#include "Coordenada.h"

Coordenada::Coordenada(int _x, int _y): x(_x),y(_y){
}

Coordenada::~Coordenada(){
}

string Coordenada::toString(){
	return string();
}

int Coordenada::getX(){
	return x;
}

int Coordenada::getY(){
	return y;
}
