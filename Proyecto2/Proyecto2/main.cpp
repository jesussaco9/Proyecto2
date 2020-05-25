#include "CampoAbstracto.h"
#include "CampoNuevePuntos.h"
#include "CampoQuincePuntos.h"
#include "CampoResultante.h"
#include "CampoSeisPuntos.h"


using namespace std;


int main() {
	CampoAbstracto* ca = new CampoNuevePuntos("A2");
	cout << ca->getCodigo() << endl;
	CampoNuevePuntos* cnp = new CampoNuevePuntos("CampoNuevePuntos");
	cout << cnp->getCodigo() << endl;
	system("pause");
	return 0;
}