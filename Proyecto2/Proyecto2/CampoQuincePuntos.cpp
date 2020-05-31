#include "CampoQuincePuntos.h"

CampoQuincePuntos::CampoQuincePuntos():
	CampoAbstracto(){
	codigo = "class CampoQuincePuntos";
}

CampoQuincePuntos::~CampoQuincePuntos(){
}

string CampoQuincePuntos::getCodigo(){
	return codigo;
}

void CampoQuincePuntos::ingresaCampo(CampoAbstracto*)
{
}
