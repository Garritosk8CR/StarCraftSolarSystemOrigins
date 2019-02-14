#pragma once
#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "I_Lista.h"
#include "ListaPila.h"

using namespace std;

class Jugador {
private:
	int numJugador;
	int planetasConquistados;
	int cantMovidas;
	string color;
	string nombre;
	unique_ptr<I_Lista> unidadesDisponibles;
public:
	Jugador();
	~Jugador();
	int getNumJugador();
	void setNumJugador(int pnumJugador);
	int getPlanetasConquistados();
	void setPlanetasConquistados(int pplanetasConquistados);
	int getCantMovidas();
	void setCantMovidas(int pcantMovidas);
	string getColor();
	void setColor(string pcolor);
	string getNombre();
	void setNombre(string pnombre);
	int getCatUnidadesDisponibles();
	void agregarUnidad(unique_ptr<I_Unidad> punidad);
	bool invasionFail(int cantUnidades);
	unique_ptr<I_Unidad> & getUnidad();
	void checkLongInvasion(int pcantidad);

};
#endif // !JUGADOR_H