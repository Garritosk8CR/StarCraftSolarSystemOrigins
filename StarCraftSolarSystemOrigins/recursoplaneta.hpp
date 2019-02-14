#pragma once
#include <QWidget>
#include "ui_recursoplaneta.h"
#include "Juego.h"
#include "sistemasolar.hpp"

class sistemaSolar;

class Juego;

class recursoPlaneta : public QWidget {
	Q_OBJECT

public:
	recursoPlaneta(QWidget * parent = Q_NULLPTR);
	~recursoPlaneta();
	void setJuego(shared_ptr<Juego> pjuego);
	Ui::recursoPlaneta getUI();
	void setVentanaJuego(sistemaSolar * pventana);

private slots:
	void btn_edit_click();
	void btn_cancelar_click();


private:
	shared_ptr<Juego> juego;
	Ui::recursoPlaneta ui;
	sistemaSolar * ventanaJuego;
	Ui::sistemaSolar UI_juego;
	void setUI_juego(Ui::sistemaSolar pui);
};
