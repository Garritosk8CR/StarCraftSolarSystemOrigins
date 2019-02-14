#pragma once
#include <QWidget>
#include "ui_invasion.h"
#include "Juego.h"
#include "sistemasolar.hpp"

class sistemaSolar;
class Juego;

class invasion : public QWidget {
	Q_OBJECT

public:
	invasion(QWidget * parent = Q_NULLPTR);
	~invasion();
	void setJuego(shared_ptr<Juego> pjuego);
	Ui::invasion getUI();
	void setVentanaJuego(sistemaSolar * pventana);
	string getPlanetaInvadir();
	void setPlanetaInvadir(string pnombre);

private slots:
	void btn_invadir_click();
	void btn_invadirCancelar_click();

private:
	shared_ptr<Juego> juego;
	Ui::invasion ui;
	sistemaSolar * ventanaJuego;
	Ui::sistemaSolar UI_juego;
	void setUI_juego(Ui::sistemaSolar pui);
	string planetaInvadir;
};
