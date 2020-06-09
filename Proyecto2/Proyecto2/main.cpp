#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoQuincePuntos.h"
#include "CampoResultante.h"
#include "CampoSeisPuntos.h"
#include "ContenedorM.h"
#include "ProcesaCompuesto.h"
#include"Conexion.h"
using namespace std;


int main() {
	CampoAbstracto* resul = new CampoResultante();
	ContenedorV* vec = new ContenedorV();
	CampoAbstracto* cSeis = new CampoSeisPuntos();
	CampoAbstracto* cSeis2 = new CampoSeisPuntos();
	CampoAbstracto* cNueve = new CampoNuevePuntos();
	CampoAbstracto* cQuince = new CampoQuincePuntos();
	
	/*resul->ingresaCampo(cSeis);
	resul->ingresaCampo(cNueve);
	resul->ingresaCampo(cQuince);*/
	//vec->agregaCampo(cSeis);
	//vec->agregaCampo(cSeis2);
	//vec->agregaCampo(cNueve);
	//vec->agregaCampo(cQuince);
	//ProcesaCompuesto* comp = new ProcesaCompuesto(vec);
	//comp->pasaInfoVecMatriz();
	//comp->LlenarMatriz();
	//comp->muestraFinal();
	//vec->agregaCampo(cSeis);
	//vec->agregaCampo(cNueve);
	
	vec->agregaCampo(cSeis);
	//vec->agregaCampo(cNueve);
	vec->agregaCampo(cQuince);
	//vec->agregaCampo(cSeis2);
	ContenedorM* mat = new ContenedorM(vec);
	//mat->pasaInfoVectorMatriz();
	mat->llenarMatrizElementos();
	cout << mat->toStirng();
	mat->ingresaPunto(1,2);
	mat->ingresaPunto(3,2);
	mat->ingresaPunto(5,2);
	mat->ingresaPunto(2,1);
	mat->ingresaPunto(2,3);
	mat->ingresaPunto(4,3);
	mat->ingresaPunto(4, 5);
	mat->ingresaPunto(9, 12);
	mat->ingresaPunto(2,2);
	cout << "-----------------" << endl;
	cout << mat->toStirng();



	/*cout << "------------------" << endl;
	comp->meterRayita(0, 2);
	comp->muestraFinal();*/
	/*ContenedorM* mat = new ContenedorM(10, 4, 1);
	mat->llenarMatrizElementos();
	cout << mat->toStirng();
	cout << "----------------------" << endl;*/
	/*mat->ingresaPunto(1,2);
	mat->ingresaPunto(3,2);
	mat->ingresaPunto(5,2);
	mat->ingresaPunto(2,1);
	mat->ingresaPunto(2,3);
	mat->ingresaPunto(4,3);
	cout << mat->toStirng();*/
	/*cout << cSeis->toString();
	cout << cNueve->toString();
	cout << cQuince->toString();*/
	system("pause");
	return 0;
}