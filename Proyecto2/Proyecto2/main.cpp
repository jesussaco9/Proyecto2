#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoQuincePuntos.h"
#include "CampoResultante.h"
#include "CampoSeisPuntos.h"
#include "ContenedorM.h"

using namespace std;


int main() {
	//CampoAbstracto* ca = new CampoNuevePuntos("A2");
	////cout << ca->getCodigo() << endl;
	//CampoNuevePuntos* cnp = new CampoNuevePuntos("CampoNuevePuntos");
	////cout << cnp->getCodigo() << endl;
	int a = 10, b = 10;
	ContenedorM* m = new ContenedorM(a,b);
	cout<<m->toStirng();

	system("pause");
	return 0;
}