#pragma once
#include <iostream>
#include <sstream>

using namespace std;



class CampoAbstracto {

public:
	CampoAbstracto() {}
	virtual ~CampoAbstracto() {}
	virtual string getCodigo() = 0;

};
