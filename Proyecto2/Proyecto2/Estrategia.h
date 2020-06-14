#pragma once

#include"ContenedorM.h"
#include <sstream>
#include <iostream>
#include <ctime>
class Estrategia {
protected:
	int filas;
	int columnas;
public:
	Estrategia() {}
	virtual bool jugada() = 0;
	virtual void setFilas(int) {};
	virtual void setColumnas(int) {};
	virtual void setCont(int) = 0;
};
