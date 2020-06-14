#include"Central.h"
Central::Central(ContenedorM* m, Lista* l){
	tab = m;
	filas = 0;
	columnas =0;
	lis = l;
	limite1 = (m->getColumna()/2) - 2;
	limite2 = (m->getColumna()/2) + 2;
}

Central::~Central()
{
}

bool Central::jugada() {
	int X = tab->getColumna();
	int Y = tab->getFila();
	int x = 0, y = 0;
	int fin = max(X, Y) * max(X, Y);
	for (int i = 0; i < fin; i++) {
		int xp = x + Y / 2;
		int yp = y + X / 2;
		if (xp >= 0 && xp < Y && yp >= 0 && yp < X) {
			if (tab->ingresaPuntoM(xp, yp)) {
				return true;
			}
		}if (abs(x) <= abs(y) && (x != y || x >= 0)) {
			x += ((y >= 0) ? 1 : -1);
		}
		else {
			y += ((x >= 0) ? -1 : 1);
		}
	}
	
	/*bool bandera = false;
	filas = tab->getFila();
	int limit = tab->getColumna() / 2;
	while (bandera ==false){
		for (int i = 0; i < filas; i++){
			if (filas < 6) {
				if (tab->ingresaPuntoM(i + 2, limit)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i + 2, limite1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i + 2, limite1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i + 2, limite1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i, limite1 - 1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i, limite1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i, limite2 - 1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i, limite2 - 2)) {
					bandera = true;
					return true;
				}
				else
				{
					bandera = true;
				}
			}
			else
			{
				if (tab->ingresaPuntoM(i + 4, limit)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i + 4, limite1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i + 4, limite1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i + 4, limite1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i+2, limite1 - 1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i+2, limite1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i+2, limite2 - 1)) {
					bandera = true;
					return true;
				}
				else if (tab->ingresaPuntoM(i+2, limite2 - 2)) {
					bandera = true;
					return true;
				}
				else
				{
					bandera = true;
				}
			}
		}
		
	}*/
	return false;
}

void Central::setFilas(int f)
{
	this->filas = f;
}

void Central::setColumnas(int c)
{
	this->columnas = c;
}

void Central::setCont(int)
{
}
