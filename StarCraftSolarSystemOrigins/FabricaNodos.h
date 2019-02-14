#pragma once
#ifndef FABRICANODOS_H
#define FABRICANODOS_H
#include "NodoPila.h"
#include "NodoCola.h"
class NodoCola;
class NodoPila;
class FabricaNodos {
public:
	shared_ptr<I_Nodo> crearNodo(int ptipo);
};
#endif // !FABRICANODOS_H

