#include "Jugador.h"

Jugador::Jugador()
{
	unidadesDisponibles = make_unique<ListaPila>();
	numJugador = 0;
	planetasConquistados = 0;
	cantMovidas = 0;
	color = "";
}

Jugador::~Jugador()
{
}

int Jugador::getNumJugador()
{
	return numJugador;
}

void Jugador::setNumJugador(int pnumJugador)
{
	numJugador = pnumJugador;
}

int Jugador::getPlanetasConquistados()
{
	return planetasConquistados;
}

void Jugador::setPlanetasConquistados(int pplanetasConquistados)
{
	planetasConquistados = pplanetasConquistados;
}

int Jugador::getCantMovidas()
{
	return cantMovidas;
}

void Jugador::setCantMovidas(int pcantMovidas)
{
	cantMovidas = pcantMovidas;
}

string Jugador::getColor()
{
	return color;
}

void Jugador::setColor(string pcolor)
{
	color = pcolor;
}

string Jugador::getNombre()
{
	return nombre;
}

void Jugador::setNombre(string pnombre)
{
	nombre = pnombre;
}

int Jugador::getCatUnidadesDisponibles() {
	return unidadesDisponibles->getLongitud();
}

void Jugador::agregarUnidad(unique_ptr<I_Unidad> punidad) {
	unique_ptr<I_Unidad> unidad = move(punidad);
	unidadesDisponibles->insertarElem(unidad);
}

bool Jugador::invasionFail(int cantUnidades) {
	for (int i = 0; i < cantUnidades; i++) unidadesDisponibles->eliminarElem();
	return false;
}

unique_ptr<I_Unidad>& Jugador::getUnidad() {
	return unidadesDisponibles->getUnidad();
}

void Jugador::checkLongInvasion(int pcantidad) {
	if (unidadesDisponibles->getLongitud() != 0)
		for (int i = 0; i < pcantidad; i++)
			unidadesDisponibles->eliminarElem();
}
