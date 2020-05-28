#include "Vista.h"



void Vista::menuPrincipal(){
	cout << "Hola Jesus";
}

void Vista::limpiaPantalla()
{
	system("cls");
}
int Vista::opcion()
{
	int n;
	while (true) {
		if (cin >> n) {
			cin.clear();
			cin.ignore(1024, '\n');
			return n;
		}
		else {
			cout << "Por favor digite un dato numerico" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			system("pause");
		}
	}
}
