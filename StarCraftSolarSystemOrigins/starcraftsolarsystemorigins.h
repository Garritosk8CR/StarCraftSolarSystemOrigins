#ifndef STARCRAFTSOLARSYSTEMORIGINS_H
#define STARCRAFTSOLARSYSTEMORIGINS_H
#include "Juego.h"
#include "sistemasolar.hpp"

#include <QtWidgets/QWidget>
#include "ui_starcraftsolarsystemorigins.h"

class Juego;
class sistemaSolar;

class StarCraftSolarSystemOrigins : public QWidget {
	Q_OBJECT

public:
	StarCraftSolarSystemOrigins(QWidget *parent = 0);
	~StarCraftSolarSystemOrigins();
	void setJuego(shared_ptr<Juego> pjuego);
	
	void setVentanaSistemaSolar(sistemaSolar * pventana);

private slots:
	void btn_iniciar_click();

private:
	shared_ptr<Juego> juego;
	sistemaSolar * ventaSistemaSolar;
	Ui::StarCraftSolarSystemOriginsClass ui;
	Ui::sistemaSolar UI_sistemaSolar;
	bool checkCampoNombres();
	void setUI_sistemaSolar(Ui::sistemaSolar pui);
};

#endif // STARCRAFTSOLARSYSTEMORIGINS_H
