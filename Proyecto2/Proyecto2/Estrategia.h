#pragma once

#include"ContenedorM.h"
#include <sstream>
#include <iostream>
#include <ctime>
class Estrategia {
public:
	virtual bool jugada() = 0;
};
