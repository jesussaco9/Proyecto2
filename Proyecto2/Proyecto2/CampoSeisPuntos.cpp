#include "CampoSeisPuntos.h"

CampoSeisPuntos::CampoSeisPuntos(string codigo)
	:CampoAbstracto(),codigo(codigo){
}

CampoSeisPuntos::~CampoSeisPuntos(){
}

string CampoSeisPuntos::getCodigo(){
	return codigo;
}
