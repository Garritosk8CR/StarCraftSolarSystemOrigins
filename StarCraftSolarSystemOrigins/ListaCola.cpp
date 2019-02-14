#include "ListaCola.h"

ListaCola::ListaCola()
{
	primero = nullptr;
	ultimo = nullptr;
	longitud = 0;
}

void ListaCola::insertarElem(unique_ptr<I_Unidad> &punidad) const {
	//shared_ptr<I_Nodo> nodo(make_shared<NodoPila>());
	//nodo->setUnidad(punidad);

	//if (!esVacia()) {
	//	nodo->setAnterior(ultimo);
	//	ultimo = nodo;
	//	longitud++;
	//}
	//else {
	//	primero = (make_shared<NodoCola>());
	//	primero->setUnidad(punidad);
	//	ultimo = (make_shared<NodoCola>());
	//	ultimo->setUnidad(punidad);
	//	longitud++;
	//}

	shared_ptr<I_Nodo> nodo(make_shared<NodoCola>());
	nodo->setUnidad(punidad);

	if (!esVacia()) {
		ultimo->setAnterior(nodo);
		ultimo = nodo;
		longitud++;
	}
	else {
		primero = nodo;
		ultimo = nodo;
		longitud++;
		//primero = (make_shared<NodoCola>());
		//primero->setUnidad(punidad);
		////ultimo = (make_shared<NodoCola>());
		//ultimo = primero;
	}
}

bool ListaCola::eliminarElem() const {
	if (!esVacia()) {
		primero = primero->getAnterior();
		longitud--;
		return true;
	}
	return false;
}

bool ListaCola::esVacia() const
{
	if (primero != nullptr) {
		return false;
	}
	return true;
}

void ListaCola::destruir() const
{
	delete this;
}

//Getter & Setter
void ListaCola::setLongitud(int plongitud)
{
	longitud = plongitud;
}

int ListaCola::getLongitud() const
{
	return longitud;
}

void ListaCola::setPrimero(shared_ptr<I_Nodo> pnodo)
{
	primero.swap(pnodo);
}

shared_ptr<I_Nodo> ListaCola::getPrimero()
{
	return primero;
}

void ListaCola::setUltimo(shared_ptr<I_Nodo> pnodo)
{
	ultimo.swap(pnodo);
}

shared_ptr<I_Nodo> ListaCola::getUltimo() const
{
	return ultimo;
}

unique_ptr<I_Unidad>& ListaCola::getUnidad() const {
	return primero->getUnidad();
}

void ListaCola::vaciar() {
	if (longitud > 0)
		while (longitud > 0) eliminarElem();
}
