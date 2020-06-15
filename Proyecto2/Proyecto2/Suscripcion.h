#pragma once

#include "Subject.h"

class Suscripcion : public Subject {
private:
	int codigoDiario;
	///////
	int tam;
	int can;
	Observer** vec;
public:
	Suscripcion();
	virtual ~Suscripcion();
	virtual void agrega(Observer*);
	virtual void notifica();
	virtual string toString();
	int getCodigoDiario();
	void setCodigodiaro(int);
	Observer* recuperaUsuario(string);
};
