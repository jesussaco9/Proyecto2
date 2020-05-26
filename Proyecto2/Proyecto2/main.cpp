#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoQuincePuntos.h"
#include "CampoResultante.h"
#include "CampoSeisPuntos.h"
#include "ContenedorM.h"

using namespace std;


int main() {
	CampoAbstracto* ca = new CampoNuevePuntos("A2");
	//cout << ca->getCodigo() << endl;
	CampoNuevePuntos* cnp = new CampoNuevePuntos("CampoNuevePuntos");
	//cout << cnp->getCodigo() << endl;
	ContenedorM* m = new ContenedorM(/*5, 5*/);
	cout << m->toStirng();

	system("pause");
	return 0;
}