#include "Unidad.h"

Unidad::~Unidad() {}
Unidad::Unidad() {}

Unidad::Unidad(string pnombre) {
	nombre = pnombre;
}

string Unidad::getNombre() const {
	return nombre;
}

void Unidad::setNombre(string pnombre) const {
	nombre = pnombre;
}
