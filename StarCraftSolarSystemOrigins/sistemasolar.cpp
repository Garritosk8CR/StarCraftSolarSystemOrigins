#include "sistemasolar.hpp"

sistemaSolar::sistemaSolar(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
	connect(ui.btnPlaneta1, SIGNAL(clicked()), this, SLOT(btnPlaneta1_click()));
	connect(ui.btnPlaneta2, SIGNAL(clicked()), this, SLOT(btnPlaneta2_click()));
	connect(ui.btnPlaneta3, SIGNAL(clicked()), this, SLOT(btnPlaneta3_click()));
	connect(ui.btnPlaneta4, SIGNAL(clicked()), this, SLOT(btnPlaneta4_click()));

	connect(ui.btnPlaneta5, SIGNAL(clicked()), this, SLOT(btnPlaneta5_click()));
	connect(ui.btnPlaneta6, SIGNAL(clicked()), this, SLOT(btnPlaneta6_click()));
	connect(ui.btnPlaneta7, SIGNAL(clicked()), this, SLOT(btnPlaneta7_click()));
	connect(ui.btnPlaneta8, SIGNAL(clicked()), this, SLOT(btnPlaneta8_click()));
	connect(ui.btnPlaneta9, SIGNAL(clicked()), this, SLOT(btnPlaneta9_click()));

	conquistadoStyle = QString("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	conquistado = QString("CONQUISTADO");
	neutralStyle = QString("backgroud - color: transparent; color: rgb(216, 216, 215);");
	neutral = QString("NEUTRAL");
	enemigoStyle = QString("backgroud - color: transparent; color: rgb(255, 76, 53);");
}

sistemaSolar::~sistemaSolar() {
	
}

void sistemaSolar::setJuego(shared_ptr<Juego> pjuego) {
	juego = pjuego;
}

Ui::sistemaSolar sistemaSolar::getUI() {
	return ui;
}

void sistemaSolar::setVentanaRecursos(recursoPlaneta * pventana) {
	ventanaRecursos = pventana;
	setUI_recursos(ventanaRecursos->getUI());
}

void sistemaSolar::setVentanaInvasion(invasion * pventana) {
	ventanaInvasion = pventana;
	setUI_invasion(ventanaInvasion->getUI());
}

void sistemaSolar::loadData() {
	loadNames();
	loadCantUnidades();
	loadConquistas();
	loadPlanetas();
	loadEstadoConquista();
}

void sistemaSolar::setUI_recursos(Ui::recursoPlaneta pui) {
	UI_recursos = pui;
}

void sistemaSolar::setUI_invasion(Ui::invasion pui) {
	UI_invasion = pui;
}

void sistemaSolar::loadNames() {
	ui.lblTurnoJugador->setText(QString::fromStdString(juego->getNomPlayer1()));
}

void sistemaSolar::loadCantUnidades() {
	ui.lblNumUnidDisponibles->setText(QString::fromStdString(to_string(juego->getCantUnidadesTurno())));
}

void sistemaSolar::loadConquistas() {
	ui.lblCantConquista->setText(QString::fromStdString(to_string(juego->getCantPlanetasConqTurno())));
}

void sistemaSolar::loadPlanetas() {
	vector<string> nombres = juego->getNombresPlanetasTurno();
	ui.btnPlaneta1->setText(QString::fromStdString(nombres[0]));
	ui.btnPlaneta2->setText(QString::fromStdString(nombres[1]));
	ui.btnPlaneta3->setText(QString::fromStdString(nombres[2]));
	ui.btnPlaneta4->setText(QString::fromStdString(nombres[3]));
	ui.btnPlaneta5->setText(QString::fromStdString(nombres[4]));
	ui.btnPlaneta6->setText(QString::fromStdString(nombres[5]));
	ui.btnPlaneta7->setText(QString::fromStdString(nombres[6]));
	ui.btnPlaneta8->setText(QString::fromStdString(nombres[7]));
	ui.btnPlaneta9->setText(QString::fromStdString(nombres[8]));

}

void sistemaSolar::loadPlanetasConquistados()
{
	vector<int> planetasConquistados = juego->getPlanetasConquistados();

	for (int i = 0; i < planetasConquistados.size(); i++) {
		setPlanetasConquistados(planetasConquistados[i]);
	}
}

void sistemaSolar::loadPlanetasNeutrales()
{
	vector<int> planetasNeutrales = juego->getPlanetasNeutrales();

	for (int i = 0; i < planetasNeutrales.size(); i++) {
		setPlanetasNeutrales(planetasNeutrales[i]);
	}
}

void sistemaSolar::loadEstadoConquista() {
	ui.lblPlaneta2->setText(neutral);
	ui.lblPlaneta3->setText(neutral);
	ui.lblPlaneta4->setText(neutral);
	ui.lblPlaneta5->setText(neutral);
	ui.lblPlaneta6->setText(neutral);
	ui.lblPlaneta7->setText(neutral);
	ui.lblPlaneta8->setText(neutral);
	ui.lblPlaneta9->setText(neutral);

	ui.lblPlaneta2->setStyleSheet("backgroud-color: transparent; color: rgb(216, 216, 215);");
	ui.lblPlaneta3->setStyleSheet("backgroud-color: transparent; color: rgb(216, 216, 215);");
	ui.lblPlaneta4->setStyleSheet("backgroud-color: transparent; color: rgb(216, 216, 215);");
	ui.lblPlaneta5->setStyleSheet("backgroud-color: transparent; color: rgb(216, 216, 215);");
	ui.lblPlaneta6->setStyleSheet("backgroud-color: transparent; color: rgb(216, 216, 215);");
	ui.lblPlaneta7->setStyleSheet("backgroud-color: transparent; color: rgb(216, 216, 215);");
	ui.lblPlaneta8->setStyleSheet("backgroud-color: transparent; color: rgb(216, 216, 215);");
	ui.lblPlaneta9->setStyleSheet("backgroud-color: transparent; color: rgb(216, 216, 215);");
}

void sistemaSolar::setPlanetasConquistados(int pnum)
{
	switch (pnum)
	{
	case 1:  ui.lblPlaneta1->setText(conquistado);
				ui.lblPlaneta1->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	case 2:  ui.lblPlaneta2->setText(conquistado);
				ui.lblPlaneta2->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	case 3:  ui.lblPlaneta3->setText(conquistado);
				ui.lblPlaneta3->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	case 4:  ui.lblPlaneta4->setText(conquistado);
				ui.lblPlaneta4->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	case 5:  ui.lblPlaneta5->setText(conquistado);
				ui.lblPlaneta5->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	case 6:  ui.lblPlaneta6->setText(conquistado);
				ui.lblPlaneta6->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	case 7:  ui.lblPlaneta7->setText(conquistado);
				ui.lblPlaneta7->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	case 8:  ui.lblPlaneta8->setText(conquistado);
				ui.lblPlaneta8->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	case 9:  ui.lblPlaneta9->setText(conquistado);
				ui.lblPlaneta9->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
				break;
	default:
		break;
	}
}

void sistemaSolar::setPlanetasNeutrales(int pnum)
{
	switch (pnum)
	{
	case 1:  ui.lblPlaneta1->setText(neutral);
		ui.lblPlaneta1->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	case 2:  ui.lblPlaneta2->setText(neutral);
		ui.lblPlaneta2->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	case 3:  ui.lblPlaneta3->setText(neutral);
		ui.lblPlaneta3->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	case 4:  ui.lblPlaneta4->setText(neutral);
		ui.lblPlaneta4->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	case 5:  ui.lblPlaneta5->setText(neutral);
		ui.lblPlaneta5->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	case 6:  ui.lblPlaneta6->setText(neutral);
		ui.lblPlaneta6->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	case 7:  ui.lblPlaneta7->setText(neutral);
		ui.lblPlaneta7->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	case 8:  ui.lblPlaneta8->setText(neutral);
		ui.lblPlaneta8->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	case 9:  ui.lblPlaneta9->setText(neutral);
		ui.lblPlaneta9->setStyleSheet("backgroud - color: transparent; color: rgb(216, 216, 215);");
		break;
	default:
		break;
	}
}

void sistemaSolar::fillRecursos(QString pnombre) {
	UI_recursos.lblNumDefensa->setText(QString::fromStdString(to_string(juego->getCantDefensaPlaneta(pnombre.toStdString()))));
	UI_recursos.lblNumProduc->setText(QString::fromStdString(to_string(juego->getCantProdPlaneta(pnombre.toStdString()))));
	ventanaRecursos->setWindowTitle(pnombre);
}

void sistemaSolar::fillInvasion(QString pnombre) {
	ventanaInvasion->setWindowTitle(pnombre);
}

void sistemaSolar::setInvadido(QString pPlaneta) {
	if (pPlaneta == ui.btnPlaneta1->text()) {
		ui.lblPlaneta1->setText(conquistado);
		ui.lblPlaneta1->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}else if (pPlaneta == ui.btnPlaneta2->text()) {
		
		ui.lblPlaneta2->setText(conquistado);
		ui.lblPlaneta2->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}
	else if (pPlaneta == ui.btnPlaneta3->text()) {
		ui.lblPlaneta3->setText(conquistado);
		ui.lblPlaneta3->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}
	else if (pPlaneta == ui.btnPlaneta4->text()) {
		ui.lblPlaneta4->setText(conquistado);
		ui.lblPlaneta4->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}
	else if (pPlaneta == ui.btnPlaneta5->text()) {
		ui.lblPlaneta5->setText(conquistado);
		ui.lblPlaneta5->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}
	else if (pPlaneta == ui.btnPlaneta6->text()) {
		ui.lblPlaneta6->setText(conquistado);
		ui.lblPlaneta6->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}
	else if (pPlaneta == ui.btnPlaneta7->text()) {
		ui.lblPlaneta7->setText(conquistado);
		ui.lblPlaneta7->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}
	else if (pPlaneta == ui.btnPlaneta8->text()) {
		ui.lblPlaneta8->setText(conquistado);
		ui.lblPlaneta8->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}
	else if (pPlaneta == ui.btnPlaneta9->text()) {
		ui.lblPlaneta9->setText(conquistado);
		ui.lblPlaneta9->setStyleSheet("backgroud-color: transparent; color: rgb(0, 0, 255); ");
	}
}

void sistemaSolar::refreshData() {
	loadCantUnidades();
	loadConquistas();
	loadNames();
	//loadPlanetasConquistados();
	//loadPlanetasNeutrales();
}


void sistemaSolar::btnPlaneta1_click() {
	if (ui.lblPlaneta1->text() != neutral) {
		fillRecursos(ui.btnPlaneta1->text());
		ventanaRecursos->show();
	}
	else {
		ventanaInvasion->setPlanetaInvadir(ui.btnPlaneta1->text().toStdString());
		fillInvasion(ui.btnPlaneta1->text());
		ventanaInvasion->show();
	}
}

void sistemaSolar::btnPlaneta2_click() {

	if (ui.lblPlaneta2->text() != neutral) {
		fillRecursos(ui.btnPlaneta2->text());
		ventanaRecursos->setWindowTitle(ui.btnPlaneta2->text());
		ventanaRecursos->show();
	}
	else {
		fillInvasion(ui.btnPlaneta2->text());
		ventanaInvasion->show();
	}
	

}

void sistemaSolar::btnPlaneta3_click() {
	if (ui.lblPlaneta3->text() != neutral) {
		fillRecursos(ui.btnPlaneta3->text());
		ventanaRecursos->setWindowTitle(ui.btnPlaneta3->text());
		ventanaRecursos->show();
	}
	else {
		fillInvasion(ui.btnPlaneta3->text());
		ventanaInvasion->show();
	}
}

void sistemaSolar::btnPlaneta4_click() {
	if (ui.lblPlaneta4->text() != neutral) {
		fillRecursos(ui.btnPlaneta4->text());
		ventanaRecursos->setWindowTitle(ui.btnPlaneta4->text());
		ventanaRecursos->show();
	}
	else {
		fillInvasion(ui.btnPlaneta4->text());
		ventanaInvasion->show();
	}
}

void sistemaSolar::btnPlaneta5_click() {
	if (ui.lblPlaneta5->text() != neutral) {
		fillRecursos(ui.btnPlaneta5->text());
		ventanaRecursos->setWindowTitle(ui.btnPlaneta5->text());
		ventanaRecursos->show();
	}
	else {
		fillInvasion(ui.btnPlaneta5->text());
		ventanaInvasion->show();
	}
}

void sistemaSolar::btnPlaneta6_click() {
	if (ui.lblPlaneta6->text() != neutral) {
		fillRecursos(ui.btnPlaneta6->text());
		ventanaRecursos->setWindowTitle(ui.btnPlaneta6->text());
		ventanaRecursos->show();
	}
	else {
		fillInvasion(ui.btnPlaneta6->text());
		ventanaInvasion->show();
	}
}

void sistemaSolar::btnPlaneta7_click() {
	if (ui.lblPlaneta7->text() != neutral) {
		fillRecursos(ui.btnPlaneta7->text());
		ventanaRecursos->setWindowTitle(ui.btnPlaneta7->text());
		ventanaRecursos->show();
	}
	else {
		fillInvasion(ui.btnPlaneta7->text());
		ventanaInvasion->show();
	}
}

void sistemaSolar::btnPlaneta8_click() {
	if (ui.lblPlaneta8->text() != neutral) {
		fillRecursos(ui.btnPlaneta8->text());
		ventanaRecursos->setWindowTitle(ui.btnPlaneta8->text());
		ventanaRecursos->show();
	}
	else {
		fillInvasion(ui.btnPlaneta8->text());
		ventanaInvasion->show();
	}
}

void sistemaSolar::btnPlaneta9_click() {
	if (ui.lblPlaneta9->text() != neutral) {
		fillRecursos(ui.btnPlaneta9->text());
		ventanaRecursos->setWindowTitle(ui.btnPlaneta9->text());
		ventanaRecursos->show();
	}
	else {
		fillInvasion(ui.btnPlaneta9->text());
		ventanaInvasion->show();
	}
}
