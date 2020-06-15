#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Observer {
	string nombre;
	string cedula;
public:
	Observer(string,string);
	virtual ~Observer();
	virtual void actualizar(int) = 0;//M.V.P
	virtual string toString() = 0;//M.V.P
	virtual void setCodigo(int) = 0;//M.V.P
	virtual void setNombre(string);
	virtual void setId(string);
	virtual string getId();
};