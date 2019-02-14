#include "NodoCola.h"

NodoCola::NodoCola()
{
	unidad = nullptr;
	//anterior = nullptr;
	//siguiente = nullptr;
}

//Getter & Setter
unique_ptr<I_Unidad> & NodoCola::getUnidad() const {
	return unidad;
}

void NodoCola::setUnidad(unique_ptr<I_Unidad> & punidad) const {
	unidad = { move(punidad) };
}

shared_ptr<I_Nodo> NodoCola::getSiguiente()
{
	return siguiente;
}

void NodoCola::setSiguiente(shared_ptr<I_Nodo> pnodo)
{
	siguiente = pnodo;
}

shared_ptr<I_Nodo> NodoCola::getAnterior() const
{
	return anterior;
}

void NodoCola::setAnterior(shared_ptr<I_Nodo> pnodo) const
{
	anterior = pnodo;
}