#pragma once
#ifndef ARBIN_H
#define ARBIN_H
#include "I_Arbol.h"
#include "I_NodoArbol.h"
#include "NodoArbin.h"
#include "Planeta.h"
#include "Jugador.h"
#include <vector>
class Jugador;
class Planeta;
class NodoArbin;

class Arbin{
public:
	Arbin();
	unique_ptr<I_NodoArbol> & getRaiz();
	bool estaElemento(shared_ptr<Planeta>);
	bool estaElemento(string pnombre);
	bool insertarElemento(shared_ptr<Planeta>);
	shared_ptr<Planeta> getPlaneta(string pnombre);
	void loadUnidadesProduccion(unique_ptr<Jugador> & pjugador);
	vector<string> getListaPlanetas();
	vector<int> getListaProduccion();
	vector<int> getListaDefensa();
	vector<int> getPlanetasConquistados(unique_ptr<Jugador> & pjugador);
	vector<int> getPlanetasNeutrales(unique_ptr<Jugador> & pjugador);

private:

    mutable unique_ptr<I_NodoArbol> raiz;

	int peso();
    void setRaiz(unique_ptr<I_NodoArbol>);
	bool esHoja();
    bool estaElemRecursivo(unique_ptr<I_NodoArbol> &r, shared_ptr<Planeta>);
	bool estaElemRecursivo(unique_ptr<I_NodoArbol> &r, string pnombre);
	int pesoRecursivo(unique_ptr<I_NodoArbol> &r);
    bool insertarElemRecursivo(unique_ptr<I_NodoArbol> &r, shared_ptr<Planeta>);
	bool isNodoEmpty(unique_ptr<I_NodoArbol> &r);
	bool equals(unique_ptr<I_NodoArbol> &r,shared_ptr<Planeta> pplaneta);
	bool equals(unique_ptr<I_NodoArbol> &r, string pnombre);
	unique_ptr<I_NodoArbol> & getMayor_O_Menor(unique_ptr<I_NodoArbol> &r,shared_ptr<Planeta> pplaneta);
	bool isNewNodo( unique_ptr<I_NodoArbol> &r,shared_ptr<Planeta> pplaneta);
	bool makeNodo(unique_ptr<I_NodoArbol> & r, shared_ptr<Planeta> pplaneta);
	shared_ptr<Planeta> getPlanetaRecursivo(unique_ptr<I_NodoArbol> &r, string pnombre);
	void loadUnidadesProduccionRecursivo(unique_ptr<I_NodoArbol>& r, unique_ptr<Jugador>& pjugador);
	void setUnidadesJugador(unique_ptr<I_NodoArbol>& r, unique_ptr<Jugador>& pjugador);
	void getListaPlanetasRecursivo(unique_ptr<I_NodoArbol>& r, vector<string>* plista);
	void getListaProduccionRecursivo(unique_ptr<I_NodoArbol>& r, vector<int>* plista);
	void getListaDefensaRecursivo(unique_ptr<I_NodoArbol>& r, vector<int>* plista);
	void getPlanetasConquistadosRecursivo(unique_ptr<I_NodoArbol>& r, vector<int>* plista, unique_ptr<Jugador> & pjugador, int pcont);
	void getPlanetasNeutralesRecursivo(unique_ptr<I_NodoArbol>& r, vector<int>* plista, unique_ptr<Jugador> & pjugador, int pcont);
};
#endif // !ARBIN_H