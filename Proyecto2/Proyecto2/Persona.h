#pragma once

#include "Observer.h"

class Persona :public Observer {
private:
	string nombre;
	string cedula;
	int codigoDeAcceso;
public:
	Persona(string, string);
	virtual ~Persona();
	virtual void actualizar(int);
	virtual string toString();
	virtual void setCodigo(int);
};

