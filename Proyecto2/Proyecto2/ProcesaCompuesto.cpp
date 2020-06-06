#include "ProcesaCompuesto.h"

ProcesaCompuesto::ProcesaCompuesto(ContenedorV*  vec){
	vector = vec;
	cantidadM = 0;
	pasaInfoVecMatriz();
	/*fil = 0;
	col = 0;*/

	matriz = new ContenedorM(fil,col,cantidadM);
	separador = "   ";
}

ProcesaCompuesto::~ProcesaCompuesto(){

}

void ProcesaCompuesto::pasaInfoVecMatriz(){
	string tipo = "class CampoSeisPuntos";
	string tipo2 = "class CampoNuevePuntos";
	string tipo3 = "class CampoQuincePuntos";
	int varFil =3;
	int varCol = 0;
	int cantM = vector->getCantidad();
	for (int i = 0; i < cantM; i++) {
		if (tipo == typeid(*vector->getCampoAbstracto(i)).name()) {
			varCol = varCol + 4;
		}
		else if (tipo2 == typeid(*vector->getCampoAbstracto(i)).name()) {
			varCol = varCol + 6;
		}
		else if (tipo3 == typeid(*vector->getCampoAbstracto(i)).name()) {
			varCol = varCol + 10;
		}
	}
	setFilas(varFil);
	setCol(varCol);
	setCanMatriz(cantM);
}

void ProcesaCompuesto::setFilas(int fil){
	this->fil = fil;
}

void ProcesaCompuesto::setCol(int col){
	this->col = col;
}

void ProcesaCompuesto::setCanMatriz(int cantidadM){
	this->cantidadM = cantidadM;
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
