#include "CampoQuincePuntos.h"

CampoQuincePuntos::CampoQuincePuntos():
	CampoAbstracto(){
	codigo = "class CampoQuincePuntos";
	fil = 10;
	col = 6;
	
}

CampoQuincePuntos::~CampoQuincePuntos(){
	
}

string CampoQuincePuntos::getCodigo(){
	return codigo;
}

void CampoQuincePuntos::ingresaCampo(CampoAbstracto*)
{
}

string CampoQuincePuntos::toString(){
	return string();
}

ElementosDeMatriz* CampoQuincePuntos::retornarPos(int x, int y){
	return NULL;
}

int CampoQuincePuntos::getCol(){
	return col;
}

ContenedorV* CampoQuincePuntos::retornaContenedor(){//No se desarrolla
	return nullptr;
}

void CampoQuincePuntos::limpiaVector()
{
}
