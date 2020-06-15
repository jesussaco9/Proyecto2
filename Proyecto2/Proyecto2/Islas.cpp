#include "Islas.h"

Islas::Islas(ContenedorM* m, Lista<Coordenada>* l){
	tab = m;
	filas = 0;
	columnas = 0;
	lis = l;
	cont = 0;
}


bool Islas::jugada(){
	bool bandera = false;
	Coordenada* cor;
	int col = tab->getColumna();
	int fil = tab->getFila();
	/*while (bandera == false) {*/
	if (cont!=0) {
		int a, b;
		a = tab->getJugadaMX();
		b = tab->getJugadaMY();

		if (tab->ingresaPuntoM(a + 1, b + 1)) {
			cont++;
			bandera = true;
			return true;
		}
		else if (tab->ingresaPuntoM(a - 1, b - 1)) {
			cont++;
			bandera = true;
			return true;
		}
		else if (tab->ingresaPuntoM(a + 1, b - 1)) {
			cont++;
			bandera = true;
			return true;
		}
		else if (tab->ingresaPuntoM(a - 1, b + 1)) {
			cont++;
			bandera = true;
			return true;
		}
		else {
			return false;
		}
	}
	return false;
	
	/*}*/
}

void Islas::setFilas(int)
{
}

void Islas::setColumnas(int)
{
}

void Islas::setCont(int i)
{
	this->cont = i;
}
