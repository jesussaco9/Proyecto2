#include"Aleatorio.h"

Aleatorio::Aleatorio(ContenedorM* m){
	tab = m;
	filas=0;
	columnas=0;
}

Aleatorio::~Aleatorio(){

}

bool Aleatorio::jugada(){
	bool bandera = false;
	int x, y;
	while (bandera == false) {
		srand(time(0));
		x = 1 + (rand() % filas);
		y = 1 + (rand() % columnas);
		if(tab->posicionVacia(x,y))
			tab->ingresaPunto(x,y);
		bandera = true;
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
