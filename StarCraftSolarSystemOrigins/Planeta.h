#pragma once
#ifndef PLANETA_H
#define PLANETA_H
#include <string>
#include "I_Lista.h"
#include "ListaCola.h"
#include "ListaPila.h"
#include "Jugador.h"

class I_Lista;
class ListaCola;
class ListaPila;
class Jugador;

using namespace std;

class Planeta {
private:
	mutable unique_ptr<ListaCola> u_def;
	mutable shared_ptr<I_Lista> u_prod;
	string nombre;
	int cantProduccion;
	int jugador;
	void agregarUnidadesProd();
	void agregarUnidadesDefensa(unique_ptr<Jugador>& turno, int cantUnidades);
public:
	Planeta();
	~Planeta();
	string getNombre();
	void setNombre(string pnombre);
	int getCantProduccion();
	void setCantProduccion(int pcant);
	unique_ptr<I_Unidad> getUnidadProd();
	int getProduccionRestante();
	unique_ptr<I_Unidad> & makeUnidad(int ptipo, unique_ptr<I_Unidad> & r);
	unique_ptr<I_Unidad> getUnidadDef();
	int getJugador();
	void setJugador(int pjugador);
	bool canInvade(int cantUnidades);
	bool invade(unique_ptr<Jugador> & turno, int cantUnidades);
	void agregarUnidadDefensa(unique_ptr<I_Unidad> & r);
	int getCantDefensa();
};
#endif // !PLANETA_H

