#include "ElementoVacio.h"

ElementoVacio::ElementoVacio():ElementosDeMatriz(){
}

string ElementoVacio::toString(){
	stringstream s;
	s << "   ";
	return s.str();
}

string ElementoVacio::toString2(){
	stringstream s;
	s << "   ";
	return s.str();
}

string ElementoVacio::getNombreClase(){
	return "ElementoVacio";
}
