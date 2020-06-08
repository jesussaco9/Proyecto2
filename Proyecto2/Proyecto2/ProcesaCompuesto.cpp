#include "ProcesaCompuesto.h"

ProcesaCompuesto::ProcesaCompuesto(ContenedorV*  vec){
	vector = vec;
	cantidadM = 0;
	fil = 0;
	col = 0;
	pasaInfoVecMatriz();
	//matriz = new ContenedorM();
	separador = "   ";
}

ProcesaCompuesto::~ProcesaCompuesto(){

}

void ProcesaCompuesto::pasaInfoVecMatriz(){
	string tipo = "class CampoSeisPuntos";
	string tipo2 = "class CampoNuevePuntos";
	string tipo3 = "class CampoQuincePuntos";
	int varFil = 10;
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
	//matriz->setSeparador(separador);
}

void ProcesaCompuesto::meterRayita(int i, int j){
	matriz->ingresaPunto(i, j);
}

ContenedorM* ProcesaCompuesto::getContenidoMatriz(){
	return nullptr;
}

void ProcesaCompuesto::LlenarMatriz(){
	matriz->llenarMatrizElementos();
}
