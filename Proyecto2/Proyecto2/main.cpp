#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoQuincePuntos.h"
#include "CampoResultante.h"
#include "CampoSeisPuntos.h"
#include "ContenedorM.h"
#include "ProcesaCompuesto.h"
#include"Conexion.h"
#include "Controladora.h"
using namespace std;


int main() {
	Controladora* inicio = new Controladora();
	inicio->menuPrincipal();

	/*CampoAbstracto* resul = new CampoResultante();
	ContenedorV* vec = new ContenedorV();
	CampoAbstracto* cSeis = new CampoSeisPuntos();
	CampoAbstracto* cSeis2 = new CampoSeisPuntos();
	CampoAbstracto* cNueve = new CampoNuevePuntos();
	CampoAbstracto* cQuince = new CampoQuincePuntos();
	
	resul->ingresaCampo(cSeis);
	resul->ingresaCampo(cNueve);
	resul->ingresaCampo(cQuince);

	ContenedorM* mat = new ContenedorM(resul->retornaContenedor());
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
	cout << mat->toStirng();*/


	system("pause");
	return 0;
}