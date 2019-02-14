#pragma once
#ifndef I_LISTA_H
#define I_LISTA_H
#include "FabricaNodos.h"

class FabricaNodos;

class I_Lista {
public:
	virtual ~I_Lista() {}
	virtual void insertarElem(unique_ptr<I_Unidad> & punidad)const = 0;
	virtual bool eliminarElem()const = 0;
	virtual shared_ptr<I_Nodo> getUltimo()const = 0;
	virtual int getLongitud()const = 0;
	virtual bool esVacia()const = 0;
	virtual void destruir()const = 0;
	virtual unique_ptr<I_Unidad> & getUnidad()const = 0;
};
#endif // !I_LISTA_H

