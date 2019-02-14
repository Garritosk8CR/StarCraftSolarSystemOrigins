#pragma once
#ifndef I_NODO_H
#define I_NODO_H
#include "FabricaUnidades.h"

class FabricaUnidades;

class I_Nodo {
public:
	virtual ~I_Nodo() {}
	virtual void setAnterior(shared_ptr<I_Nodo> pnodo) const = 0;
	virtual shared_ptr<I_Nodo> getAnterior() const = 0;
	virtual unique_ptr<I_Unidad> & getUnidad() const = 0;
	virtual void setUnidad(unique_ptr<I_Unidad> &punidad) const = 0;
};
#endif // !I_NODO_H

