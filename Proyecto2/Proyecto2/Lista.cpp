#include "Lista.h"

nodo::nodo(Coordenada* dato, nodo* siguiente) : dato(dato), siguiente(siguiente) {
}

Coordenada* nodo::obtenerDato() {
    return dato;
}

nodo* nodo::obtenerSiguiente() {
    return siguiente;
}

void nodo::fijarSiguiente(nodo* a) {
    siguiente = a;
}
void nodo::setDato(Coordenada* dato) {
    this->dato = dato;
}
nodo::~nodo() {
}
/////////////////          LISTA


Lista::Lista() : primero(NULL), n(0) {
}
void Lista::agregarCoordenada(Coordenada* a) {
    primero = new nodo(a, primero);
    n++;
}

string Lista::toString() {
    stringstream s;
    nodo* actual = primero;
    Coordenada* _coor;
    while (actual != NULL) {
        _coor = actual->obtenerDato();
        s << _coor->toString();
        actual = actual->obtenerSiguiente();
    }

    return s.str();
}

bool Lista::estaVacia() const {
    if (primero == NULL) {
        return true;
    }
    else {
        return false;
    }
}

bool Lista::eliminaObjeto(int pos) {
	bool bandera = false;
	nodo* actual = primero;
	nodo* anterior = NULL;
	int cont = 1;
	if (pos == 1) {
		if (primero != NULL) {
			anterior = primero;
			primero = primero->obtenerSiguiente();
			delete anterior;
			bandera = true;
			n--;
		}
	}
	else {
		while (actual->obtenerSiguiente() != NULL && cont < pos) {
			anterior = actual;
			cont++;
			actual = actual->obtenerSiguiente();
		}
		anterior->fijarSiguiente(actual->obtenerSiguiente());
		delete actual;
		bandera = true;
		n--;
	}
	return bandera;
}

int Lista::getN(){
	return n;
}

Coordenada* Lista::recuperarElemento(int pos) {
	nodo* actual = primero;
	Coordenada* e;
	int p =1;
	while (actual != NULL) {
		e = actual->obtenerDato();
		if (pos == p) {
			return e;
		}
		p++;
		actual = actual->obtenerSiguiente();
	}
	return NULL;
}

Lista::~Lista() {
}
