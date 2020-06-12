#include"Aleatorio.h"

class Vector {
protected:
	int tam;
	int can;
	int v[200];
public:
	Vector() {
		tam = 200;
		can = 0;
		for (int i = 0; i < tam; i++) {
			v[i] = 0;
		}
	}
	void agrega(int x) {
		if (can < tam)
			v[can++] = x;
	}
	bool usado(int a) {
		if (can != 0) {
			for (int i = 0; i < can; i++) {
				if (v[i] == a) {
					return true;
				}
			}
		}
		else {
			return false;
		}
		
	}
};

Aleatorio::Aleatorio(ContenedorM* m, Lista* l){
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

	/*bool bandera = false;
	int x, y;
	int acumulado = 0;
	Vector v;
	while (bandera == false) {
		srand(time(0));
		x = 1 + (rand() % filas);
		y = 1 + (rand() % columnas);
		acumulado = x + y;
		if (!v.usado(acumulado)) {
			if (tab->ingresaPuntoM(x, y)) {
				v.agrega(acumulado);
				bandera = true;
			}
			else {
				bandera = false;
			}
		}
		else {
			bandera = false;
		}
			
	}
	return bandera;*/
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
