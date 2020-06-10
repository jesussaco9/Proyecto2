#pragma once

#include"ContenedorM.h"
#include <sstream>
#include <iostream>
#include <ctime>
class Estrategia {
public:
	Estrategia() {}
	virtual bool jugada() = 0;
};
