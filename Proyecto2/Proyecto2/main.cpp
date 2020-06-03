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
	int a = 10, b = 10;
	CampoAbstracto* resul = new CampoResultante();
	ContenedorV* vec = new ContenedorV();
	CampoAbstracto* cSeis = new CampoSeisPuntos();
	CampoAbstracto* cNueve = new CampoNuevePuntos();
	CampoAbstracto* cQuince = new CampoQuincePuntos();

	/*resul->ingresaCampo(cSeis);
	resul->ingresaCampo(cNueve);
	resul->ingresaCampo(cQuince);*/
	vec->agregaCampo(cSeis);
	//vec->agregaCampo(cNueve);
	//vec->agregaCampo(cQuince);
	ProcesaCompuesto* comp = new ProcesaCompuesto(vec);
	comp->pasaInfoVecMatriz();
	comp->muestraFinal();
	//comp->setSeparador("--");
	//comp->muestraFinal();
	/*int a = 0,b=1;
	Conexion* c1 = new Conexion();
	c1->setPosicionX(a);
	c1->setPosicionY(b);*/
	
	/*cout << c1->toString()[2];*/

	system("pause");
	return 0;
}