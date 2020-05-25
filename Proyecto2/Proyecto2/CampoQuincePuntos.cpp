#include "CampoQuincePuntos.h"

CampoQuincePuntos::CampoQuincePuntos(string codigo):
	CampoAbstracto(),codigo(codigo){
}

CampoQuincePuntos::~CampoQuincePuntos(){
}

string CampoQuincePuntos::getCodigo(){
	return codigo;
}
