#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Observer {

public:
	Observer() {};
	virtual ~Observer() {};
	virtual void actualizar(int) = 0;//M.V.P
	virtual string toString() = 0;//M.V.P
	virtual void setSaldo(double) = 0;//M.V.P
	virtual void setCodigo(int) = 0;//M.V.P
};