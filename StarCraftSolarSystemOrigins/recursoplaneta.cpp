#include "recursoplaneta.hpp"

recursoPlaneta::recursoPlaneta(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
	connect(ui.btnEditar, SIGNAL(clicked()), this, SLOT(btn_edit_click()));
	connect(ui.btnCancelar, SIGNAL(clicked()), this, SLOT(btn_cancelar_click()));
}

recursoPlaneta::~recursoPlaneta() {
	
}

void recursoPlaneta::setJuego(shared_ptr<Juego> pjuego) {
	juego = pjuego;
}

Ui::recursoPlaneta recursoPlaneta::getUI() {
	return ui;
}

void recursoPlaneta::setVentanaJuego(sistemaSolar * pventana) {
	ventanaJuego = pventana;
	setUI_juego(ventanaJuego->getUI());
}

void recursoPlaneta::setUI_juego(Ui::sistemaSolar pui) {
	UI_juego = pui;
}
void recursoPlaneta::btn_edit_click() {
	if (juego->llenarUnidadesDefensa(stoi(ui.txtCantUnidades->text().toStdString()), this->windowTitle().toStdString()))
		ventanaJuego->refreshData(),
		this->hide();
}

void recursoPlaneta::btn_cancelar_click() {
	this->hide();
}
