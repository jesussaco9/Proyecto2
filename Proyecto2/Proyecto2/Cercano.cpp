#include"Cercano.h"

Cercano::Cercano(ContenedorM* m, Lista<Coordenada>* l)
{
	tab = m;
	lis = l;
}

Cercano::~Cercano()
{
}

bool Cercano::jugada(){
	bool bandera = false;
	int cont = 0;
	Coordenada* cor;
	int col=tab->getColumna();
	int fil = tab->getFila();
	//if (tab->getInicio()%2 == 0) {
		while (bandera == false){
			int a, b;
			a = tab->getCor1();
			b = tab->getCor2();
			if (tab->ingresaPuntoM(a + 1, b + 1)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a - 2, b)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a - 1, b - 1)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a - 1, b + 1)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a, b - 2)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a +1, b-1)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a + 2, b)) {
				bandera = true;
				return true;
			}
			
			else if (tab->ingresaPuntoM(a-1, b - 1)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a + 1, b - 1)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a - 1, b + 1)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a + 1, b + 1)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a -1, b + 2)) {
				bandera = true;
				return true;
			}
			else if (tab->ingresaPuntoM(a - 1, b + 1)) {
				bandera = true;
				return true;
			}
			else{
				return false;
			}
						
		}
	/*}
	else {
		return false;
	}
	return false;*/
}

void Cercano::setFilas(int f)
{
	this->filas = f;
}

void Cercano::setColumnas(int c)
{
	this->columnas = c;
}

void Cercano::setCont(int)
{
}
