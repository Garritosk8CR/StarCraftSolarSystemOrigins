#pragma once
#ifndef NODOPILA_H
#define NODOPILA_H
#include "I_Nodo.h"
class I_Nodo;

class NodoPila : public I_Nodo{
private:
	mutable unique_ptr<I_Unidad> unidad;
	mutable shared_ptr<I_Nodo> anterior;
public:
	NodoPila();
	unique_ptr<I_Unidad> & getUnidad() const;
	void setUnidad(unique_ptr<I_Unidad> & punidad)const;
	shared_ptr<I_Nodo> getAnterior() const;
	void setAnterior(shared_ptr<I_Nodo> pnodo) const;
};
#endif // !NODOPILA_H


//// pasar get y set unidad a interface

