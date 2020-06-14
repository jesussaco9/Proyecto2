#pragma once

#include "Observer.h"

class Persona :public Observer {
private:
	string nombre;
	string cedula;
	double saldo;
	int codigoDeAcceso;
public:
	Persona(string, string, double);
	virtual ~Persona();
	virtual void actualizar(int);
	virtual string toString();
	virtual void setSaldo(double);
	virtual void setCodigo(int);
};

