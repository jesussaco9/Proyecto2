#include "CampoNuevePuntos.h"

CampoNuevePuntos::CampoNuevePuntos()
:CampoAbstracto(){
	codigo = "class CampoNuevePuntos";
}

CampoNuevePuntos::~CampoNuevePuntos(){
}

string CampoNuevePuntos::getCodigo(){
	return codigo;
}

void CampoNuevePuntos::ingresaCampo(CampoAbstracto*){
}
