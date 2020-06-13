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
	
	system("pause");
	return 0;
}