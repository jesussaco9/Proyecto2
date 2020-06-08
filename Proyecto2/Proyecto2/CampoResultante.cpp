#include "CampoResultante.h"

CampoResultante::CampoResultante()
	:CampoAbstracto(){
	codigo = "";
	vector = new ContenedorV;
}

CampoResultante::~CampoResultante(){
}

string CampoResultante::getCodigo(){
	return codigo;
}


void CampoResultante::ingresaCampo(CampoAbstracto* obj){
	vector->agregaCampo(obj);
}

ContenedorV* CampoResultante::retornaContenedor(){
	return vector;
}

string CampoResultante::toString()
{
	return string();
}

ElementosDeMatriz* CampoResultante::retornarPos(int x, int y)
{
	return nullptr;
}

int CampoResultante::getCol()
{
	return 0;
}
