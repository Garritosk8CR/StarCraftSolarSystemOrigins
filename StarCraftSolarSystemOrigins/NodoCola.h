#pragma once
#ifndef NODOCOLA_H
#define NODOCOLA_H
#include "I_Nodo.h"
class I_Nodo;

class NodoCola : public I_Nodo {
private:
	mutable unique_ptr<I_Unidad> unidad;
	mutable shared_ptr<I_Nodo> anterior;
	mutable shared_ptr<I_Nodo> siguiente;
public:
	NodoCola();
	void setUnidad(unique_ptr<I_Unidad> & punidad) const;
	unique_ptr<I_Unidad> & getUnidad() const;
	void setSiguiente(shared_ptr<I_Nodo> pnodo);
	shared_ptr<I_Nodo> getSiguiente();
	void setAnterior(shared_ptr<I_Nodo> pnodo) const;
	shared_ptr<I_Nodo> getAnterior() const;
};
#endif // !NODOCOLA_H