#pragma once
#include "Coordenada.h"

class nodo {
private:
    Coordenada* dato;
    nodo* siguiente;
public:
    nodo(Coordenada*, nodo*);
    virtual Coordenada* obtenerDato();
    virtual nodo* obtenerSiguiente();
    virtual void fijarSiguiente(nodo*);
    virtual void setDato(Coordenada*);
    virtual ~nodo();
};

class Lista{
private:
    nodo* primero;
    int n;
public:
    Lista();
    void agregarCoordenada(Coordenada*);
    virtual string toString();
    bool estaVacia() const;
    virtual ~Lista();
    bool eliminaObjeto(int pos);
    Coordenada* recuperarElemento(int pos);
    int getN();
};

