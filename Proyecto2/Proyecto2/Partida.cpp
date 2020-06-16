#include "Partida.h"

Partida::Partida(string jug1, string jug2/*, Lista<Coordenada>* lis*/, CampoAbstracto* camp) {
	jugador1 = jug1;
	jugador2 = jug2;
	//listaJugadas = new Lista<Coordenada>();
	campos = camp;
	static int numeroPartida;
}

Partida::~Partida()
{
}

//void Partida::setLista(Lista<Coordenada>* lis){
//	listaJugadas = lis;
//}

string Partida::toString(){
	stringstream s;
	s << "Jugador1: " << jugador1 << endl;
	s << "Jugador2: " << jugador2 << endl;
	s << "Nuemro de partida: " << numeroPartida << endl;
	return s.str();
}
