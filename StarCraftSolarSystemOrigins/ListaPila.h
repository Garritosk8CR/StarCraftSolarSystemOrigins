#pragma once
#ifndef LISTAPILA_H
#define LISTAPILA_H
#include "I_Lista.h"
class I_Lista;

class ListaPila : public I_Lista{
private:
	mutable shared_ptr<I_Nodo> ultimo;
	mutable int longitud;
public:
	ListaPila();
	void insertarElem(unique_ptr<I_Unidad> &punidad)const;
	bool eliminarElem()const;
	shared_ptr<I_Nodo> getUltimo()const;
	int getLongitud()const;
	void setLongitud(int pnum);
	bool esVacia()const;
	void destruir()const;
	void setUltimo(shared_ptr<I_Nodo> punidad);
	unique_ptr<I_Unidad> & getUnidad()const;

};
#endif // !LISTAPILA_H

