#include "Planeta.h"

Planeta::Planeta() {
	u_def = make_unique<ListaCola>();
	u_prod = make_shared<ListaPila>();
	jugador = 0;
}

void Planeta::agregarUnidadesProd() {
	unique_ptr<I_Unidad> p;
	for (int i = 0; i < cantProduccion; i++) u_prod->insertarElem(makeUnidad(1, p));
}

void Planeta::agregarUnidadesDefensa(unique_ptr<Jugador>& turno, int cantUnidades) {
	for (int i = 0; i < (cantUnidades - (cantProduccion + u_def->getLongitud())); i++)
		agregarUnidadDefensa(turno->getUnidad());
}

unique_ptr<I_Unidad>&  Planeta::makeUnidad(int ptipo, unique_ptr<I_Unidad> & p) {
	unique_ptr<FabricaUnidades> fabrica = make_unique<FabricaUnidades>();
	return fabrica->crearUnidad(1, p, (u_prod->getLongitud() + 1));
}

void Planeta::setCantProduccion(int pcant) {
	cantProduccion = pcant;
	agregarUnidadesProd();
}

unique_ptr<I_Unidad> Planeta::getUnidadDef() {
	unique_ptr<I_Unidad> aux = move(u_def->getUnidad());
	u_def->eliminarElem();
	return move(aux);
}

unique_ptr<I_Unidad> Planeta::getUnidadProd() {
	unique_ptr<I_Unidad> aux = move(u_prod->getUnidad());
	u_prod->eliminarElem();
	return move(aux);
}

int Planeta::getProduccionRestante() {
	return u_prod->getLongitud();
}

Planeta::~Planeta() {}

string Planeta::getNombre() { return nombre; }
void Planeta::setNombre(string pnombre) { nombre = pnombre; }
int Planeta::getCantProduccion() { return cantProduccion; }
int Planeta::getJugador(){ return jugador; }
void Planeta::setJugador(int pjugador){ jugador = pjugador; }

bool Planeta::canInvade(int cantUnidades) { return cantUnidades >= (cantProduccion + u_def->getLongitud()); }

bool Planeta::invade(unique_ptr<Jugador>& turno, int cantUnidades) {
	setJugador(turno->getNumJugador());
	if (cantUnidades > (cantProduccion + u_def->getLongitud()))
		agregarUnidadesDefensa(turno, cantUnidades);
	else
		u_def->vaciar();
	turno->checkLongInvasion(cantUnidades);
	turno->setPlanetasConquistados(turno->getPlanetasConquistados() + 1);
	return true;
}

void Planeta::agregarUnidadDefensa(unique_ptr<I_Unidad>& r) {
	u_def->insertarElem(r);
}

int Planeta::getCantDefensa() {
	return u_def->getLongitud();
}
