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
	s << "\t\tColumnas\n";
	for (int j = 0; j < col; j++) {
		s << "    "; s <<j+1; /*cout << " ";*/
	}
	s << endl;
	for (int i = 0; i < fil; i++) {

		if ((i + 1) < 10) {
			s <<" "<< i + 1;
			for (int j = 0; j < col; j++) {
				s << "  O  ";
			}
		}
		else{
			s << i + 1;
			for (int j = 0; j < col; j++) {
				s << "  O  ";
			}
		}
		s << endl;
	}
	/*s << endl;*/
	s << "===================================================\n";
	return s.str();
	/*stringstream s;
	int numeroF = fil;
	int cont = 1;
	s << "===================================================\n";
	for (int i = 0; i < fil; i++) {
		if (i == 0) {
			for (int d = 0; d <= col; d++) {
				if (d == 0) {
					s << "      ";
				}
				else {
					s << "     ";
				}
				s << d;
				if (d == 10)
					s << endl;
			}
			s << endl;
		}
		for (int j = 0; j <= col; j++) {
			if (j == 0) {
				cout << " " << numeroF << " ";
				s << "  O  ";
			}
			if (j >= 1)
				s << "  O  ";
			if (cont % 2 == 0) {
				if (mat[i][j] == NULL) {
					s << "     ";
				}
				else {
					s << " ";
				}
			}
			else {
				if (mat[i][j] == NULL) {
					s << "     ";
				}
				else {
					s << " ";
				}
			}

			if (j == 10)
				s << "  O  ";
			cont++;
		}cont++;
		s << endl;
		numeroF--;
	}
	s << "\n===================================================\n";
	return s.str();*/
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
