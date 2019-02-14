#include "NodoArbin.h"

NodoArbin::NodoArbin() { }

shared_ptr<Planeta> NodoArbin::getPlaneta()const { return planeta; }

unique_ptr<I_NodoArbol>& NodoArbin::getHijoIzq()const { return hijoIzq; }

unique_ptr<I_NodoArbol>& NodoArbin::getHijoDer()const { return hijoDer; }

void NodoArbin::setPlaneta(shared_ptr<Planeta> pplaneta)const { planeta = pplaneta; }

void NodoArbin::setHijoIzq(unique_ptr<I_NodoArbol> pizq)const { hijoIzq = move(pizq); }

void NodoArbin::setHijoDer(unique_ptr<I_NodoArbol> pder)const { hijoDer = move(pder); }