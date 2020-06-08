#pragma once
#include <iostream>
#include <sstream>
#include "ElementosDeMatriz.h"
#include "Punto.h"
#include "Conexion.h"

using namespace std;



class CampoAbstracto {//  <<Abstrac>>

public:
	CampoAbstracto() {}
	virtual ~CampoAbstracto() {}
	virtual string getCodigo() = 0;
	virtual void ingresaCampo(CampoAbstracto*)=0;
	virtual string toString() = 0;
	virtual ElementosDeMatriz* retornarPos(int x, int y) = 0;
	virtual int getCol() = 0;
};
