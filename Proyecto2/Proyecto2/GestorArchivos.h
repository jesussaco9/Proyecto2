#pragma once

#include <iostream>
#include <fstream>
#include <istream>
using namespace std;

#include "Lista.h"
class GestorArchivos {
private:
    string ruta;
    fstream archivo;
public:
    GestorArchivos(string);
    virtual ~GestorArchivos();

    //****Paso 1****
    virtual void abrirFlujoModoEscritura();
    virtual void abrirFlujoModoLectura();
    virtual void cerrarFlujo();

    //****Paso 2****
    static int obtenerInt(string);
    static double obtenerDouble(string);
    static bool obtenerBool(string);
    //****Paso 3****
    virtual void guardarInt(int, char);
    virtual void guardarDouble(double, char);
    virtual void guardarString(string, char);
    virtual void guardarBool(bool, char);

    virtual int recuperarInt(char);
    virtual double recuperarDouble(char);
    virtual string recuperarString(char);
    virtual bool recuperarBool(char);
//    //****Paso 4*****
    virtual void guardarCoordenada(Coordenada*);
    virtual Coordenada* recuperarCoordenada();
    virtual void guardarCoordenadas(Lista<Coordenada>*);
    virtual Lista<Coordenada>* recuperarCoordenadas();
};
