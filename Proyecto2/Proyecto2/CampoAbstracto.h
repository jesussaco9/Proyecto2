#pragma once
#include <iostream>
#include <sstream>

using namespace std;



class CampoAbstracto {//  <<Abstrac>>

public:
	CampoAbstracto() {}
	virtual ~CampoAbstracto() {}
	virtual string getCodigo() = 0;
	virtual void ingresaCampo(CampoAbstracto*)=0;
};
