#pragma once
#ifndef LISTACOLA_H
#define LISTACOLA_H
#include "I_Lista.h"

class I_Lista;

class ListaCola : public I_Lista {
private:
	mutable shared_ptr<I_Nodo> primero;
	mutable shared_ptr<I_Nodo> ultimo;
	mutable int longitud;
public:
	ListaCola();
	void insertarElem(unique_ptr<I_Unidad> & punidad) const;
	bool eliminarElem() const;
	bool esVacia() const;
	void destruir() const;
	void setLongitud(int plongitud);
	int getLongitud() const;
	void setPrimero(shared_ptr<I_Nodo> pnodo);
	shared_ptr<I_Nodo> getPrimero();
	void setUltimo(shared_ptr<I_Nodo> pnodo);
	shared_ptr<I_Nodo> getUltimo()const;
	unique_ptr<I_Unidad> & getUnidad()const;
	void vaciar();
};
#endif // !LISTACOLA_H