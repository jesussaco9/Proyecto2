#pragma once

#include "Observer.h"
class Subject{
	
public:
	Subject() {};
	virtual ~Subject() {};
	virtual void agrega(Observer*) = 0;
	virtual void notifica() = 0;
	virtual string toString() = 0;
	virtual Observer* recuperaUsuario(string) = 0;
};