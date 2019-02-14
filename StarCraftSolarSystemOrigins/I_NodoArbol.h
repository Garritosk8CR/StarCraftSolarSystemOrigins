#pragma once
#ifndef I_NODOARBOL_H
#define I_NODOARBOL_H
#include "FabricaNodos.h"
#include "Planeta.h"

class FabricaNodos;
class Planeta;

class I_NodoArbol {
public:
	virtual ~I_NodoArbol() {}
	virtual shared_ptr<Planeta> getPlaneta()const = 0;
	virtual unique_ptr<I_NodoArbol> & getHijoIzq()const = 0;
	virtual unique_ptr<I_NodoArbol> & getHijoDer()const = 0;
	virtual void setPlaneta(shared_ptr<Planeta> pplaneta)const = 0;
	virtual void setHijoIzq(unique_ptr<I_NodoArbol>)const = 0;
	virtual void setHijoDer(unique_ptr<I_NodoArbol>)const = 0;
};
#endif // !I_NODOARBOL_H

