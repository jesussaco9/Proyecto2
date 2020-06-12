#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Coordenada {
private:
	int x, y;
public:
	Coordenada(int, int);
	~Coordenada();
	string toString();
	int getX();
	int getY();
};

