#pragma once
#include <iostream>
#include <sstream>
#include<ctime>
using namespace std;
class DiaYCodigo{
private:
	string dia;
	int cont;
	int codigo;
public:
	DiaYCodigo();
	virtual ~DiaYCodigo();
	string getDia();
	int getConta();
	int getCodigo();
	void setDia(int);
	void setCont();
	void setCodigo();
};

