#include "CampoNuevePuntos.h"

CampoNuevePuntos::CampoNuevePuntos()
:CampoAbstracto(){
	codigo = "class CampoNuevePuntos";
	fil = 10;
	col = 6;
}

CampoNuevePuntos::~CampoNuevePuntos(){
	
}

string CampoNuevePuntos::getCodigo(){
	return codigo;
}

void CampoNuevePuntos::ingresaCampo(CampoAbstracto*){
}

string CampoNuevePuntos::toString(){
	return string();
}

ElementosDeMatriz* CampoNuevePuntos::retornarPos(int x, int y){
	return NULL;
}

int CampoNuevePuntos::getCol(){
	return col;
}

ContenedorV* CampoNuevePuntos::retornaContenedor(){//No se desarrolla
	return nullptr;
}
