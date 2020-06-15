#include "Observer.h"

Observer::Observer(string nom, string id):nombre(nom),cedula(id){
}

Observer::~Observer()
{
}

void Observer::setNombre(string nom){
	nombre = nom;
}

void Observer::setId(string id){
	cedula = id;
}

string Observer::getId(){
	return cedula;
}
