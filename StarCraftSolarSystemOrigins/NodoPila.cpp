#include "NodoPila.h"

NodoPila::NodoPila() {
	unidad = nullptr;
	//(anterior.lock()) = nullptr;
}

unique_ptr<I_Unidad> & NodoPila::getUnidad() const {
	return unidad;
}



void NodoPila::setUnidad(unique_ptr<I_Unidad>& punidad) const{
		unidad = { std::move(punidad) };
}

shared_ptr<I_Nodo> NodoPila::getAnterior() const {
	return anterior;
}

void NodoPila::setAnterior(shared_ptr<I_Nodo> pnodo) const {

	anterior = (pnodo);
}
