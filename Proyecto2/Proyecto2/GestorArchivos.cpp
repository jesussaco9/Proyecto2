#include "GestorArchivos.h"


GestorArchivos::GestorArchivos(string ruta)
    : ruta(ruta) {
}


GestorArchivos::~GestorArchivos() {
}

void GestorArchivos::abrirFlujoModoEscritura() {
    archivo.open(ruta, ios::out);
}

void GestorArchivos::abrirFlujoModoLectura() {
    archivo.open(ruta, ios::in);
}

void GestorArchivos::cerrarFlujo() {
    archivo.close();
}


int GestorArchivos::obtenerInt(std::string s) {
    int v;
    std::stringstream r(s);
    r >> v;
    return v;
}
double GestorArchivos::obtenerDouble(std::string s) {
    double v;
    std::stringstream r(s);
    r >> v;
    return v;
}

bool GestorArchivos::obtenerBool(std::string s) {
    bool v;
    std::stringstream r(s);
    r >> v;
    return v;
}

void GestorArchivos::guardarInt(int i, char delimitador) {
    archivo << i << delimitador;
}

void GestorArchivos::guardarDouble(double d, char delimitador) {
    archivo << d << delimitador;
}

void GestorArchivos::guardarString(string s, char delimitador) {
    archivo << s << delimitador;
}

void GestorArchivos::guardarBool(bool s, char delimitador) {
    archivo << s << delimitador;
}

int GestorArchivos::recuperarInt(char delimitador) {
    string r;
    getline(archivo, r, delimitador);
    return obtenerInt(r);
}
double GestorArchivos::recuperarDouble(char delimitador) {
    string r;
    getline(archivo, r, delimitador);
    return obtenerDouble(r);
}
string GestorArchivos::recuperarString(char delimitador) {
    string r;
    getline(archivo, r, delimitador);
    return r;
}

bool GestorArchivos::recuperarBool(char delimitador) {
    string r;
    bool b;
    getline(archivo, r, delimitador);
    std::istringstream(r) >> b;
    return b;
}

void GestorArchivos::guardarCoordenada(Coordenada* i){
    guardarInt(i->getX(), '\t');
    guardarInt(i->getY(), '\n');
}

Coordenada* GestorArchivos::recuperarCoordenada(){
    Coordenada* coor = NULL;
    int x, y;
    x = recuperarInt('\t');
    y = recuperarInt('\n');
    coor = new Coordenada(x, y);
    return coor;
}

void GestorArchivos::guardarCoordenadas(Lista<Coordenada>* listaCoordenadas){
    listaCoordenadas->inicializarActual();
    Coordenada* p;
    int n = listaCoordenadas->getN();
    guardarInt(n, '\n');
    int i = 0;
    while (i < n) {
        p = listaCoordenadas->recuperarCoordenadasArchivos();
        guardarCoordenada(p);
        i++;
    }
}

Lista<Coordenada>* GestorArchivos::recuperarCoordenadas(){
    int cantidadCoordenadas;
    Lista<Coordenada>* _listaCoordenadas = new Lista<Coordenada>;
    Coordenada* in;
    cantidadCoordenadas = recuperarInt('\n');

    int i = 0;
    while (i < cantidadCoordenadas) {
        in = recuperarCoordenada();
        if (in != NULL) {
            _listaCoordenadas->ingresarDeUltimo(in);
            i++;
        }
    }
    return _listaCoordenadas;
}
