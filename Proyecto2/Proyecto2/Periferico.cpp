#include"Periferico.h"

Periferico::Periferico(ContenedorM* m, Lista<Coordenada>* l){
	tab = m;
	filas = 0;
	columnas = 0;
	lis = l;
	ini = 0;
}

Periferico::~Periferico()
{
}

bool Periferico::jugada(){
	int n = tab->getColumna();
	int inicio = 0;
	int nlimite = n - 1;
	int nlimiteF = tab->getFila();
	int c = 1;
	while (c <= (n * n)) {
		for (int i = inicio; i <= nlimite; i++) {
			if (tab->ingresaPuntoM(inicio, i)) {
				c++;
				return true;
			}
		}
		for (int i = inicio; i <= nlimite; i++) {
			if (tab->ingresaPuntoM(i, nlimite)) {
				c++;
				return true;
			}
		}
		for (int i = nlimite - 1; i >= inicio; i--) {
			if (tab->ingresaPuntoM(nlimiteF-1, i)) {
				c++;
				return true;
			}
		 }
		for (int i = nlimite -1; i >= inicio+1; i--) {
			if (tab->ingresaPuntoM(i,inicio)) {
				c++;
				return true;
			}
		}
		nlimiteF -= 1;
		inicio += 1;
		nlimite -= 1;
	}
	return false;
}

void Periferico::setFilas(int f)
{
	this->filas = f;
}

void Periferico::setColumnas(int c)
{
	this->columnas = c;
}

int Periferico::getInicio(){
	return ini;
}

void Periferico::setInicio(int ini){
	this->ini = ini;
}

void Periferico::setCont(int)
{
}
