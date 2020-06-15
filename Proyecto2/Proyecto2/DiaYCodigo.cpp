#include "DiaYCodigo.h"

DiaYCodigo::DiaYCodigo(){
	dia = "Lunes";
	cont = 0;
	srand(time(0));
	codigo = 1000 + (rand() % 10000);
}

DiaYCodigo::~DiaYCodigo(){

}

string DiaYCodigo::getDia(){
	string dia;
	int numeroDia = this->getConta();
	switch (numeroDia) {
	case 0:
		return "Lunes";
		break;
	case 1:
		return "Martes";
		break;
	case 2:
		return "Miercoles";
		break;
	case 3:
		return "Jueves";
		break;
	case 4:
		return "Viernes";
		break;
	case 5:
		return "Sabado";
		break;
	case 6:
		return "Domingo";
		break;
	default:
		break;
	}
}

int DiaYCodigo::getConta(){
	return cont;
}

int DiaYCodigo::getCodigo(){
	return codigo;
}

void DiaYCodigo::setDia(int d){
	dia = d;
}

void DiaYCodigo::setCont(){
	if (cont < 6) {
		cont++;
	}
	else
	{
		cont = 0;
	}
}

void DiaYCodigo::setCodigo(){
	srand(time(0));
	codigo = 1000 + (rand() % 10000)-300;
}


