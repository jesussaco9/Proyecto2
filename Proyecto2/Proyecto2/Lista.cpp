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
