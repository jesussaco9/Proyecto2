#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "ContenedorV.h"
#include "ElementosDeMatriz.h"
#include "Punto.h"
#include "Conexion.h"
#include "ElementoVacio.h"
#include "CuadroGanador.h"
#include "Cuadro1.h"
#include "Cuadro2.h"
#include "Lista.h"
using namespace std;

class ContenedorM{
private:
	ElementosDeMatriz*** mat;//Siguiendo el UML del profe
	ContenedorV* vector;
	Lista<Coordenada>* lista;
	Lista<Coordenada>* listaPorPartida;
	int fil;
	int col;
	int inicia, fin;
	string separador;//Siguiendo el UML del profe
	int cantidadM;
	int contador1;
	int contador2;
	bool sigue;
	int modo;
	int cor1;
	int cor2;
	int inicio;
	int jugadaMX;
	int jugadaMY;
public:
	ContenedorM(ContenedorV*,Lista<Coordenada>*,int, Lista<Coordenada>*);
	virtual ~ContenedorM();
	void pasaInfoVectorMatriz();
	void llenarMatrizElementos();
	ElementosDeMatriz* retornarPos(int x, int y);
	string toStirng() const;
	bool ingresaPunto(int, int);//Siguiendo el UML del profe
	bool ingresaPuntoM(int, int);
	int getFila();
	int getColumna();
	void setFila(int);
	void setCol(int);
	int getInicia();
	int getFin();
	void setInicia(int);
	void setFin(int);
	bool continuaJuego();
	bool posicionVacia(int,int);
	void validaCuadroCerrado(int);
	int getContador1();
	int getContador2();
	void PosiblesJugadas();
	void setSigue(bool);
	bool getSigue();
	void setCor1(int);
	void setCor2(int);
	int getCor1();
	int getCor2();
	void setInicio(int);
	int getInicio();
	int getJugadaMX();
	void setJugadaMX(int);
	int getJugadaMY();
	void setJugadaMY(int);
	ContenedorV* getContenedorV();
	Lista<Coordenada>* getLista();
	void limpiaMatriz();
};

