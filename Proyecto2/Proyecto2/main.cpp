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
	/*ProcesaCompuesto* comp = new ProcesaCompuesto(vec);
	comp->pasaInfoVecMatriz();
	comp->LlenarMatriz();
	comp->muestraFinal();
	cout << "------------------" << endl;
	comp->meterRayita(0, 2);
	comp->muestraFinal();*/
	ContenedorM* mat = new ContenedorM(3, 4, 1);
	mat->llenarMatrizElementos();
	cout << mat->toStirng();
	cout << "----------------------" << endl;
	mat->ingresaPunto(1, 3);
	cout << mat->toStirng();
	system("pause");
	return 0;
}