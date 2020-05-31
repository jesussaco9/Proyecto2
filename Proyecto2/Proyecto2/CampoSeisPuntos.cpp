#include "CampoSeisPuntos.h"

CampoSeisPuntos::CampoSeisPuntos()
	:CampoAbstracto(){
	codigo = "class CampoSeisPuntos";
}

CampoSeisPuntos::~CampoSeisPuntos(){
}

string CampoSeisPuntos::getCodigo(){
	return codigo;
}

void CampoSeisPuntos::ingresaCampo(CampoAbstracto*)
{
}
