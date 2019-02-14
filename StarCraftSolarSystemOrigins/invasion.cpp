#include "invasion.hpp"

invasion::invasion(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
	connect(ui.btnInvadir, SIGNAL(clicked()), this, SLOT(btn_invadir_click()));
	connect(ui.btnCancelar, SIGNAL(clicked()), this, SLOT(btn_invadirCancelar_click()));
}

invasion::~invasion() {
	
}

void invasion::setJuego(shared_ptr<Juego> pjuego) {
	juego = pjuego;
}

Ui::invasion invasion::getUI() {
	return ui;
}

void invasion::setVentanaJuego(sistemaSolar * pventana) {
	ventanaJuego = pventana;
	setUI_juego(ventanaJuego->getUI());
}

string invasion::getPlanetaInvadir() {
	return planetaInvadir;
}

void invasion::setPlanetaInvadir(string pnombre) {
	planetaInvadir = pnombre;
}

void invasion::btn_invadirCancelar_click() {
}

void invasion::setUI_juego(Ui::sistemaSolar pui) {
	UI_juego = pui;
}

void invasion::btn_invadir_click() {
	if (juego->invadir(stoi(ui.lineEdit->text().toStdString() ), this->windowTitle().toStdString())) {
		ventanaJuego->setInvadido(this->windowTitle());
		ventanaJuego->refreshData();
		ventanaJuego->loadPlanetas();
		this->hide();
	}
}
