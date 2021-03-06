#include"Aleatorio.h"

Aleatorio::Aleatorio(ContenedorM* m, Lista<Coordenada>* l){
	tab = m;
	filas=0;
	columnas=0;
	lis = l;
}

Aleatorio::~Aleatorio(){

}


bool Aleatorio::jugada() {
	int cantidadElementos = lis->getN();
	bool bandera = false;
	int x, y, ran;
	Coordenada* cor;
	while (bandera == false) {
		srand(time(0));
		ran = 1 + (rand() % cantidadElementos);
		cor = lis->recuperarElemento(ran);
		x = cor->getX();
		y = cor->getY();
		if (tab->ingresaPuntoM(x, y)) {
			bandera = true;
			lis->eliminaObjeto(ran);
		}
		else{
			bandera = false;
		}
	}
	return bandera;
}

string Aleatorio::toString(){
	return string();
}

void Aleatorio::mover(){

}

void Aleatorio::setFilas(int f){
	this->filas = f;
}

void Aleatorio::setColumnas(int c){
	this->columnas = c;
}

void Aleatorio::setCont(int)
{
}
