#include"Periferico.h"

Periferico::Periferico(ContenedorM* m, Lista* l){
	tab = m;
	filas = 0;
	columnas = 0;
	lis = l;
	ini = 0;
}

Periferico::~Periferico()
{
}

bool Periferico::jugada()
{
	bool bandera = false;
	int c = tab->getColumna();
	int f = tab->getFila();
	int aux = 0;
	int aux2 = 0;
	int aux3 = tab->getColumna();
	int aux4 = tab->getFila();
	for (int i = this->getInicio(); i < c; i++) {
		if (this->getInicio() <= c - 1) {
			if (tab->ingresaPuntoM(aux, i)) {
				this->setInicio(i);
				bandera = true;
				return true;
			}
			else {
				bandera = false;
			}
		}
	}
	for (int i = 0; i < f; i++) {
		if (tab->ingresaPuntoM(i, aux)) {
			bandera = true;
			return true;
		}
		else {
			bandera = false;
		}
	}
	for (int i = 0; i < f; i++) {
		if (tab->ingresaPuntoM(i, aux3 - 1)) {
			bandera = true;
			return true;
		}
		else {
			bandera = false;
		}
	}
	for (int i = 0; i < c; i++) {
		if (tab->ingresaPuntoM(f - 1, i)) {
			bandera = true;
			return true;
		}
		else {
			bandera = false;
		}
	}
	
	
	

	//while (!bandera)
	//{
	//	if (aux % 2 == 0) {
	//		for (int i = 1; i < c; i + 2) {
	//			if (tab->ingresaPuntoM(aux, i)) {
	//				bandera = true;
	//				i++;
	//				aux++;
	//				return true;
	//			}
	//			else {
	//				bandera = false;
	//			}

	//		}
	//	}
	//	else {
	//		for (int i = 0; i < c; i + 2) {
	//			if (tab->ingresaPuntoM(aux, i)) {
	//				bandera = true;
	//				aux++;
	//				return true;
	//			}
	//			else {
	//				bandera = false;
	//			}

	//		}
	//	}
	//	bandera = true;
	///*	for (int i = 1; i < f; i + 2) {
	//		if (tab->ingresaPuntoM(i, aux3)) {
	//			bandera = true;
	//			return true;
	//		}
	//		else {
	//			bandera = false;
	//		}
	//	}
	//	for (int i = c; i > 0; i--) {
	//		if (tab->ingresaPuntoM(aux4, i)) {
	//			bandera = true;
	//			return true;
	//		}
	//		else {
	//			bandera = false;
	//		}
	//	}
	//	for (int i = f; i > 0; i--) {
	//		if (tab->ingresaPuntoM(i, aux2)) {
	//			bandera = true;
	//			return true;
	//		}
	//		else {
	//			bandera = false;
	//		}
	//	}*/	
	//	/*aux++;*/
	//	aux3--;
	//	aux4--;
	//	aux2++;
	//}
	
	
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
