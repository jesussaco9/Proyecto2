#include "ContenedorM.h"

ContenedorM::ContenedorM(int fila,int colu){
	fil = fila;
	col = colu;
	mat = new string ** [fil];
	for (int i = 0; i < fil; i++) {
		mat[i] = new string*[col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = NULL;
		}
	}
}

ContenedorM::~ContenedorM(){
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			delete mat[i][j];
		}
	}
	for (int i = 0; i < fil; i++) {
		delete[] mat[i];
	}
	delete[] mat;
}

string ContenedorM::toStirng() const{
	stringstream s;
	s <<"===================================================\n";
	for (int j = 0; j < col; j++) {
		s << "    "; s <<j+1; cout << " ";
	}
	s << endl;
	for (int i = 0; i < fil; i++) {
		if ((i + 1) < 10) {
			s <<" "<< i + 1;
			for (int j = 0; j < col; j++) {
				s << "  0  ";
			}
		}
		else{
			s << i + 1;
			for (int j = 0; j < col; j++) {
				s << "  0  ";
			}
		}
		s << endl << endl;
	}
	s << endl;
	s << " ===================================================\n";
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
