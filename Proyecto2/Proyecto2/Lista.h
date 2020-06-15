#pragma once
#include "Coordenada.h"

template<class T>
class Nodo {
private:
    T* dato;
    Nodo<T>* siguiente;
public:
    Nodo(T*, Nodo<T>*);
    virtual T* obtenerDato();
    virtual Nodo<T>* obtenerSiguiente();
    virtual void fijarSiguiente(Nodo<T>*);
    virtual void setDato(T*);
    virtual ~Nodo();
};
template<class T>
Nodo<T>::Nodo(T* dato, Nodo<T>* siguiente) : dato(dato), siguiente(siguiente) {
}

template<class T>
T* Nodo<T>::obtenerDato() {
    return dato;
}

template<class T>
Nodo<T>* Nodo<T>::obtenerSiguiente() {
    return siguiente;
}

template<class T>
void Nodo<T>::fijarSiguiente(Nodo* a) {
    siguiente = a;
}
template<class T>
void Nodo<T>::setDato(T* dato) {
    this->dato = dato;
}
template<class T>
Nodo<T>::~Nodo() {
}


/////////////////          LISTA

template<class T>
class Lista{
private:
    Nodo<T>* primero;
    int n;
public:
    Lista();
    void agregarCoordenada(T*);
    virtual string toString();
    bool estaVacia() const;
    virtual ~Lista();
    bool eliminaObjeto(int pos);
    Coordenada* recuperarElemento(int pos);
    int getN();
};

template<class T>
Lista<T>::Lista() : primero(NULL), n(0) {
}

template<class T>
void Lista<T>::agregarCoordenada(T* a) {
    primero = new Nodo<T>(a, primero);
    n++;
}


template<class T>
string Lista<T>::toString() {
    stringstream s;
    Nodo<T>* actual = primero;
    T* _coor;
    while (actual != NULL) {
        _coor = actual->obtenerDato();
        s << _coor->toString();
        actual = actual->obtenerSiguiente();
    }

    return s.str();
}

template<class T>
bool Lista<T>::estaVacia() const {
    if (primero == NULL) {
        return true;
    }
    else {
        return false;
    }
}

template<class T>
bool Lista<T>::eliminaObjeto(int pos) {
    bool bandera = false;
    Nodo<T>* actual = primero;
    Nodo<T>* anterior = NULL;
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

template<class T>
int Lista<T>::getN() {
    return n;
}

template<class T>
Coordenada* Lista<T>::recuperarElemento(int pos) {
    Nodo<T>* actual = primero;
    Coordenada* e;
    int p = 1;
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

template<class T>
Lista<T>::~Lista() {
}
