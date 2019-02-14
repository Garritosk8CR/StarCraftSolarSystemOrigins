#pragma once
#ifndef I_ARBOL_H
#define I_ARBOL_H
#include "I_NodoArbol.h"
#include "Planeta.h"
class Planeta;
class FabricaNodos;

class I_Arbol{
public:
	virtual ~I_Arbol() {}
	virtual bool insertarElem(shared_ptr<Planeta> pplaneta)const = 0;
	virtual bool estaElemento(shared_ptr<Planeta>)const = 0;
};
#endif // !I_ARBOL_H
