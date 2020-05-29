#include"Controladora.h"

void Controladora::menuPrincipal()
{
	int opcion = 0;
	opcion = Vista::menuPrincipal();
	do {
		switch (opcion)
		{
		case 1:
			menuModalidad();
			break;
		default:
			break;
		}
	
	} while (opcion != 2);
}

void Controladora::menuModalidad()
{
	int opcion = 0;
	opcion = Vista::menuModalidad();
	do {
		switch (opcion)
		{
		case 1:
			break;
		case 2:
			break;
		default:
			break;
		}

	} while (opcion != 3);
}
