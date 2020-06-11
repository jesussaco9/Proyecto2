#include"CuadroGanador.h"

CuadroGanador::CuadroGanador(){
	ganador = " ";
	valor = 0;
}

CuadroGanador::~CuadroGanador(){

}

string CuadroGanador::toString(){
	stringstream s;
	s << "   ";
	return s.str();
}

string CuadroGanador::toString2(){
	stringstream s;
	s << "   ";
	return s.str();
}

int CuadroGanador::getPosicionX(){
	return posicionX;
}

int CuadroGanador::getPosicionY(){
	return posicionY;
}

void CuadroGanador::setPosicionX(int x)
{
	this->posicionX = x;
}

void CuadroGanador::setPosicionY(int y)
{
	this->posicionY = y;
}

void CuadroGanador::setGanador(string ganador){
	this->ganador = ganador;
	this->valor = 1;
}

void CuadroGanador::setGanador2(string ganador2){
	this->ganador2 = ganador2;
	this->valor = 2;
}


string CuadroGanador::getGanador(){
	return ganador;
}

string CuadroGanador::getTipo(){
	return string();
}
