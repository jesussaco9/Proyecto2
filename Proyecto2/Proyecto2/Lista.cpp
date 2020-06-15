#include "Lista.h"
//
//Nodo::Nodo(Coordenada* dato, Nodo* siguiente) : dato(dato), siguiente(siguiente) {
//}
//
//Coordenada* Nodo::obtenerDato() {
//    return dato;
//}
//
//Nodo* Nodo::obtenerSiguiente() {
//    return siguiente;
//}
//
//void Nodo::fijarSiguiente(Nodo* a) {
//    siguiente = a;
//}
//void Nodo::setDato(Coordenada* dato) {
//    this->dato = dato;
//}
//Nodo::~Nodo() {
//}
///////////////////          LISTA
//
//
//Lista::Lista() : primero(NULL), n(0) {
//}
//void Lista::agregarCoordenada(Coordenada* a) {
//    primero = new Nodo(a, primero);
//    n++;
//}
//
//string Lista::toString() {
//    stringstream s;
//    Nodo* actual = primero;
//    Coordenada* _coor;
//    while (actual != NULL) {
//        _coor = actual->obtenerDato();
//        s << _coor->toString();
//        actual = actual->obtenerSiguiente();
//    }
//
//    return s.str();
//}
//
//bool Lista::estaVacia() const {
//    if (primero == NULL) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//
//bool Lista::eliminaObjeto(int pos) {
//	bool bandera = false;
//	Nodo* actual = primero;
//	Nodo* anterior = NULL;
//	int cont = 1;
//	if (pos == 1) {
//		if (primero != NULL) {
//			anterior = primero;
//			primero = primero->obtenerSiguiente();
//			delete anterior;
//			bandera = true;
//			n--;
//		}
//	}
//	else {
//		while (actual->obtenerSiguiente() != NULL && cont < pos) {
//			anterior = actual;
//			cont++;
//			actual = actual->obtenerSiguiente();
//		}
//		anterior->fijarSiguiente(actual->obtenerSiguiente());
//		delete actual;
//		bandera = true;
//		n--;
//	}
//	return bandera;
//}
//
//int Lista::getN(){
//	return n;
//}
//
//Coordenada* Lista::recuperarElemento(int pos) {
//	Nodo* actual = primero;
//	Coordenada* e;
//	int p =1;
//	while (actual != NULL) {
//		e = actual->obtenerDato();
//		if (pos == p) {
//			return e;
//		}
//		p++;
//		actual = actual->obtenerSiguiente();
//	}
//	return NULL;
//}
//
//Lista::~Lista() {
//}
