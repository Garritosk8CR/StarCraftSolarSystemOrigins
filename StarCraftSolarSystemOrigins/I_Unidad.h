#pragma once
#ifndef I_UNIDAD_H
#define I_UNIDAD_H
//#include "Unidad.h"
#include "FabricaUnidades.h"
class FabricaUnidades;

#include <string>
#include <memory>
using namespace std;

class I_Unidad {
public:
	virtual ~I_Unidad() {}
	virtual string getNombre()const = 0;
	virtual void setNombre(string pnombre)const = 0;
};
#endif // !I_UNIDAD_H


