#include "starcraftsolarsystemorigins.h"

StarCraftSolarSystemOrigins::StarCraftSolarSystemOrigins(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.btn_iniciar, SIGNAL(clicked()), this, SLOT(btn_iniciar_click()));
}

StarCraftSolarSystemOrigins::~StarCraftSolarSystemOrigins()
{

}

void StarCraftSolarSystemOrigins::setJuego(shared_ptr<Juego> pjuego) {
	juego = pjuego;
}

void StarCraftSolarSystemOrigins::setVentanaSistemaSolar(sistemaSolar * pventana) {
	ventaSistemaSolar = pventana;
	setUI_sistemaSolar(ventaSistemaSolar->getUI());
}

void StarCraftSolarSystemOrigins::setUI_sistemaSolar(Ui::sistemaSolar pui) {
	UI_sistemaSolar = pui;
}

bool StarCraftSolarSystemOrigins::checkCampoNombres() {
	return (((!ui.txt_nomJugador1->text().isEmpty()) && (!ui.txt_nomJugador2->text().isEmpty())) ? true : false);
}

void StarCraftSolarSystemOrigins::btn_iniciar_click() {
	if (checkCampoNombres()) {
		juego->setNombres(ui.txt_nomJugador1->text().toStdString(), ui.txt_nomJugador2->text().toStdString());
		this->hide();
		ventaSistemaSolar->loadData();
		ventaSistemaSolar->show();
	}
}
