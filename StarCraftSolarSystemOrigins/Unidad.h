#pragma once
#ifndef UNIDAD_H
#define UNIDAD_H
#include "I_Unidad.h"
class I_Unidad;

class Unidad : public I_Unidad {
private:
	mutable string nombre;
public:
	~Unidad();
	Unidad();
	Unidad(string pnombre);
	string getNombre() const;
	void setNombre(string pnombre)const;
};
#endif // !UNIDAD_H

