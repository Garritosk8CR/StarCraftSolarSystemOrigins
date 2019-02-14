#pragma once
#ifndef NODOARBIN_H
#define NODOARBIN_H
#include "I_NodoArbol.h"
#include "Planeta.h"
class I_NodoArbol;
class Planeta;

class NodoArbin : public I_NodoArbol {
private:
	mutable shared_ptr<Planeta> planeta;
	mutable unique_ptr<I_NodoArbol> hijoIzq;
	mutable unique_ptr<I_NodoArbol> hijoDer;
public:
	NodoArbin();
	shared_ptr<Planeta> getPlaneta()const;
	unique_ptr<I_NodoArbol> & getHijoIzq()const;
	unique_ptr<I_NodoArbol> & getHijoDer()const;
	void setPlaneta(shared_ptr<Planeta> pplaneta)const;
	void setHijoIzq(unique_ptr<I_NodoArbol>)const;
	void setHijoDer(unique_ptr<I_NodoArbol>)const;
};
#endif // !NODOARBIN_H