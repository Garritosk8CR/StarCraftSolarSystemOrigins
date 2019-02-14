#pragma once
#include <QWidget>
#include "ui_sistemasolar.h"
#include "Juego.h"
#include "recursoplaneta.hpp"
#include "invasion.hpp"

class invasion;
class recursoPlaneta;

class Juego;

class sistemaSolar : public QWidget {
	Q_OBJECT

public:
	sistemaSolar(QWidget * parent = Q_NULLPTR);
	~sistemaSolar();
	void setJuego(shared_ptr<Juego> pjuego);
	Ui::sistemaSolar getUI();
	void setVentanaRecursos(recursoPlaneta * pventana);
	void setVentanaInvasion(invasion * pventana);
	
	void loadData();
	void setInvadido(QString pPlaneta);
	void refreshData();
	void loadPlanetas();
	void loadPlanetasConquistados();
	void loadPlanetasNeutrales();

private slots:
	void btnPlaneta1_click();
	void btnPlaneta2_click();
	void btnPlaneta3_click();
	void btnPlaneta4_click();
	void btnPlaneta5_click();
	void btnPlaneta6_click();
	void btnPlaneta7_click();
	void btnPlaneta8_click();
	void btnPlaneta9_click();
private:
	QString conquistadoStyle;
	QString conquistado;
	QString neutralStyle;
	QString neutral;
	QString enemigoStyle;
	QString enemigo;

	shared_ptr<Juego> juego;
	Ui::sistemaSolar ui;
	recursoPlaneta * ventanaRecursos;
	Ui::recursoPlaneta UI_recursos;
	void setUI_recursos(Ui::recursoPlaneta pui);
	invasion * ventanaInvasion;
	Ui::invasion UI_invasion;
	void setUI_invasion(Ui::invasion pui);

	void loadNames();
	void loadCantUnidades();
	void loadConquistas();
	void loadEstadoConquista();
	void setPlanetasConquistados(int pnum);
	void setPlanetasNeutrales(int pnum);

	void fillRecursos(QString pnombre);
	void fillInvasion(QString pnombre);

	
};
