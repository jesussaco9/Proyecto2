#pragma once
#include "ContenedorM.h"
#include "ContenedorV.h"

class ProcesaCompuesto{
private:
	ContenedorM* matriz;
	ContenedorV* vector;
	int fil, col,cantidadM;
	string separador;
public:
	ProcesaCompuesto(ContenedorV*);
	virtual ~ProcesaCompuesto();
	void pasaInfoVecMatriz();
	void setFilas(int);
	void setCol(int);
	void setCanMatriz(int);
	void muestraFinal();
	void setSeparador(string);
	ContenedorM* getContenidoMatriz();
};

