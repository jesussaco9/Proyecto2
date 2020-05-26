#include "CampoResultante.h"

CampoResultante::CampoResultante(string codigo)
	:CampoAbstracto(),codigo(codigo){
}

CampoResultante::~CampoResultante(){
}

string CampoResultante::getCodigo(){
	return codigo;
}

ContenedorV* CampoResultante::ConPtr()
{
	return nullptr;
}

void CampoResultante::ingresaCampo(CampoAbstracto*)
{
}

ContenedorV* CampoResultante::retornaContenedor()
{
	return nullptr;
}
