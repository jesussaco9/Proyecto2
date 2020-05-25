#include "CampoNuevePuntos.h"

CampoNuevePuntos::CampoNuevePuntos(string codigo)
:CampoAbstracto(),codigo(codigo){
}

CampoNuevePuntos::~CampoNuevePuntos(){
}

string CampoNuevePuntos::getCodigo(){
	return codigo;
}
