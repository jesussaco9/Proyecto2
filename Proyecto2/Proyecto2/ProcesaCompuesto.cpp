#include "ProcesaCompuesto.h"

ProcesaCompuesto::ProcesaCompuesto(ContenedorV*  vec){
	vector = vec;
	pasaInfoVecMatriz();
	/*fil = 0;
	col = 0;*/
	matriz = new ContenedorM(fil,col);
	separador = "   ";
}

ProcesaCompuesto::~ProcesaCompuesto()
{
}

void ProcesaCompuesto::pasaInfoVecMatriz(){
	string tipo = "class CampoSeisPuntos";
	string tipo2 = "class CampoNuevePuntos";
	string tipo3 = "class CampoQuincePuntos";
	int varFil =0;
	int varCol = 0;
	for (int i = 0; i < vector->getCantidad(); i++) {
		if (tipo == typeid(*vector->getCampoAbstracto(i)).name()) {
			//setFilas(3);
			//setCol(2);
			varFil = 3;
			varCol = varCol + 2;
		}
		else if (tipo2 == typeid(*vector->getCampoAbstracto(i)).name()) {
			//setFilas(3);
			//setCol(3);
			varFil = 3;
			varCol = varCol + 3;
		}
		else if (tipo3 == typeid(*vector->getCampoAbstracto(i)).name()) {
			//setFilas(5);
			//setCol(3);
			varFil = 3;
			varCol = varCol + 5;
		}
	}
	setFilas(varFil);
	setCol(varCol);
}

void ProcesaCompuesto::setFilas(int fil){
	this->fil = fil;
}

void ProcesaCompuesto::setCol(int col){
	this->col = col;
}

void ProcesaCompuesto::muestraFinal(){
	cout<<matriz->toStirng()<<endl;
}

void ProcesaCompuesto::setSeparador(string separador){
	matriz->setSeparador(separador);
}

ContenedorM* ProcesaCompuesto::getContenidoMatriz(){
	return nullptr;
}
