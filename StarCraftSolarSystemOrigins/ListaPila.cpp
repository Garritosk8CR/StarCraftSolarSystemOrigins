#include "ListaPila.h"

ListaPila::ListaPila() {
	ultimo = nullptr;
	longitud = 0;
}

void ListaPila::insertarElem(unique_ptr<I_Unidad> &punidad) const {
	shared_ptr<I_Nodo> nodo (make_shared<NodoPila>());
	if (!esVacia()) {
		nodo->setUnidad(punidad);
		nodo->setAnterior(ultimo);
		ultimo =nodo;
		longitud++;
	}
	else {
		ultimo = (make_shared<NodoPila>());
		ultimo->setUnidad(punidad);
		longitud++;
	}

}

bool ListaPila::eliminarElem() const {
	if (!esVacia()) {
		ultimo = ultimo->getAnterior();
		longitud--;
		return true;
	}
	return false;
}

shared_ptr<I_Nodo> ListaPila::getUltimo() const {
	return ultimo;
}

int ListaPila::getLongitud() const {
	return longitud;
}

void ListaPila::setLongitud( int pnum) {
	longitud = pnum;
}


bool ListaPila::esVacia() const {
	if (ultimo != nullptr)
		return false;
	return true;
}

void ListaPila::destruir() const{
	delete this;
}

void ListaPila::setUltimo(shared_ptr<I_Nodo> pnodo) {
	ultimo.swap(pnodo);
}

unique_ptr<I_Unidad>& ListaPila::getUnidad() const {
	return ultimo->getUnidad();
}
