#include "ContenedorM.h"

ContenedorM::ContenedorM(){
	fil = 5;
	col = 5;
	mat = new string * [fil];
	for (int i = 0; i < fil; i++) {
		mat[i] = new string[col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = " ";
		}
	}
}

ContenedorM::~ContenedorM(){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			delete mat[i];
		}
	}
	for (int i = 0; i < fil; i++) {
		delete[] mat[i];
	}
	delete[] mat;
}

string ContenedorM::toStirng() const{
	stringstream s;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			s << "  .  ";
			
		}
		s << endl;
	}
	s << endl;
	return s.str();
}

void ContenedorM::ingresaPunto(int, int, bool){

}

int ContenedorM::getFila(){
	return fil;
}

int ContenedorM::getColumna(){
	return col;
}

//int ContenedorM::getSeparador()
//{
//	return 0;
//}
