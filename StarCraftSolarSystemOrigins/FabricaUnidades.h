#pragma once
#ifndef FABRICAUNIDADES_H
#define FABRICAUNIDADES_H

#include "I_Unidad.h"
#include "Unidad.h"
#include <memory>
class I_Unidad;
class Unidad;
using namespace std;

class FabricaUnidades {
public:
	FabricaUnidades();
	~FabricaUnidades();
	unique_ptr<I_Unidad> & crearUnidad(int ptipo, unique_ptr<I_Unidad> & r, int cont);
};
#endif // !FABRICAUNIDADES_H

