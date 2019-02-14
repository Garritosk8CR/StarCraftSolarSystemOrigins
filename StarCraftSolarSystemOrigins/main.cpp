#include "starcraftsolarsystemorigins.h"
#include "Juego.h"
#include "sistemasolar.hpp"
#include "invasion.hpp"
#include "recursoplaneta.hpp"
#include <QtWidgets/QApplication>

class Juego;
class sistemaSolar;
class invasion;
class recursoPlaneta;

StarCraftSolarSystemOrigins * principal;
sistemaSolar * ventanaJuego;
invasion * ventanaInvasion; //yo
recursoPlaneta * ventanaRecursos; // yo

void distribuirJuego(shared_ptr<Juego> pjuego);
void distribuirVentanas();

int main(int argc, char *argv[]) {
	shared_ptr<Juego> juego(make_shared<Juego>());
	juego->setUp();
	QApplication a(argc, argv);

	principal = new StarCraftSolarSystemOrigins();
	ventanaJuego = new sistemaSolar();
	ventanaInvasion = new invasion();
	ventanaRecursos = new recursoPlaneta();

	distribuirJuego(juego);
	distribuirVentanas();
	principal->show();
	return a.exec();
}

void distribuirJuego(shared_ptr<Juego> pjuego) {
	principal->setJuego(pjuego);
	ventanaJuego->setJuego(pjuego);
	ventanaInvasion->setJuego(pjuego);
	ventanaRecursos->setJuego(pjuego);
}

void distribuirVentanas() {
	principal->setVentanaSistemaSolar(ventanaJuego);
	ventanaJuego->setVentanaInvasion(ventanaInvasion);
	ventanaJuego->setVentanaRecursos(ventanaRecursos);
	ventanaInvasion->setVentanaJuego(ventanaJuego);
	ventanaRecursos->setVentanaJuego(ventanaJuego);
}
