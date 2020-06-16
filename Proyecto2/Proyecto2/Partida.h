#pragma once

#include "Lista.h"
#include "CampoAbstracto.h"
#include "Coordenada.h"

class Partida{
private:
	string jugador1;
	string jugador2;
	//Lista<Coordenada>* listaJugadas;
	CampoAbstracto* campos;
	int numeroPartida;
public:
	Partida(string, string/*, Lista<Coordenada>**/, CampoAbstracto*);
	virtual ~Partida();
	//void setLista(Lista<Coordenada>*);
	string toString();
};

