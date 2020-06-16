#include "CampoSeisPuntos.h"

CampoSeisPuntos::CampoSeisPuntos()
	:CampoAbstracto(){
	codigo = "class CampoSeisPuntos";
	fil = 10;
	col = 4;
}

CampoSeisPuntos::~CampoSeisPuntos(){
	
}

string CampoSeisPuntos::getCodigo(){
	return codigo;
}

string CampoSeisPuntos::toString(){
	return string();
}

ElementosDeMatriz* CampoSeisPuntos::retornarPos(int x, int y) {
	return nullptr;
}

void CampoSeisPuntos::ingresaCampo(CampoAbstracto*){//No se desarrolla
}

int CampoSeisPuntos::getCol(){
	return col;
}

ContenedorV* CampoSeisPuntos::retornaContenedor(){//No se desarrolla
	return nullptr;
}

void CampoSeisPuntos::limpiaVector()
{
}
