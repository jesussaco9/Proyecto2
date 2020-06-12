#pragma once
#include "Coordenada.h"

class nodo {
public:
    nodo(Coordenada*, nodo*);
    virtual Coordenada* obtenerDato();
    virtual nodo* obtenerSiguiente();
    virtual void fijarSiguiente(nodo*);
    virtual void setDato(Coordenada*);
    virtual ~nodo();
private:
    Coordenada* dato;
    nodo* siguiente;

};
class Lista
{
};

