#include "Juego.h"

//========================================================================================================================//
//																														  //
//								    SECCION CONSTRUCTORES / DESTRUCTORES                                                  //
//																														  //
//========================================================================================================================//

Juego::Juego(){
	primerTurno = true;
}

Juego::~Juego() {
}

//========================================================================================================================//
//																														  //
//											 SECCION CANT UNIDADES                                                        //
//																														  //
//========================================================================================================================//

int Juego::getCantUnidadesTurno() {
	return turno->getCatUnidadesDisponibles();
}

int Juego::getCantUnidadesStandBy() {
	return standBy->getCatUnidadesDisponibles();
}

int Juego::getCantUnidadesJugador1() {
	return ((turno->getNumJugador() == 1) ? getCantUnidadesTurno() : getCantUnidadesStandBy());
}

int Juego::getCantUnidadesJugador2() {
	return ((turno->getNumJugador() == 2) ? getCantUnidadesStandBy() : getCantUnidadesTurno());
}

//========================================================================================================================//
//																														  //
//											SECCION CANT MOVIDAS														  //
//																														  //
//========================================================================================================================//

void Juego::setCantMovidasMaximo(int pcantMovidas) {
	cantMovidasMaximo = pcantMovidas;
}

int Juego::getCantMovidasMaximo() {
	return cantMovidasMaximo;
}

//========================================================================================================================//
//											 																			  //
//										    	SECCION SET UP 								     						  //
//																														  //
//========================================================================================================================//

void Juego::setUp() {
	checkPlayers();
	checkTrees();
	loadPlanets();
	setUpUnidades();
}

void Juego::checkPlayers() {
	checkTurno();
	checkStandBy();
}

void Juego::checkTrees() {
	checkTree(arbol1);
	checkTree(arbol2);
}

void Juego::checkTree(unique_ptr<Arbin>& ptree) {
	checkTreeEmpty(ptree);
}

void Juego::checkTreeEmpty(unique_ptr<Arbin>& ptree) {
	(ptree) ? checkTreeData(ptree) : makeTree(ptree);
}

void Juego::checkTreeData(unique_ptr<Arbin>& ptree) {
	(ptree->getRaiz()) ? makeTree(ptree) : true;
}

void Juego::makeTree(unique_ptr<Arbin>& ptree) {
	ptree = make_unique<Arbin>();
}

void Juego::checkTurno() {
	checkTurnoEmpty();
}

void Juego::checkTurnoEmpty() {
	( turno ) ? checkTurnoData() : makePlayer( turno, 1 );
}

void Juego::checkTurnoData() {
	( turno->getNumJugador() == 0 ) ? turno->setNumJugador( 1 ) : false;
}

void Juego::makePlayer(unique_ptr<Jugador>& pplayer, int pnumPlayer) {
	pplayer = make_unique<Jugador>();
	pplayer->setNumJugador( pnumPlayer );
}

string Juego::getNomPlayer1() {
	return turno->getNombre();
}


void Juego::loadPlanets() {
	string planetas1 = "input1.txt";
	string planetas2 = "input2.txt";
	openPlanets(planetas1, arbol1);
	openPlanets(planetas2, arbol2);
	setUpBases();
}

void Juego::openPlanets(string pfile, unique_ptr<Arbin> & ptree) {
	string Full;
	ifstream planetas(pfile);
	if (planetas.is_open())
		while (getline(planetas, Full))
			extractPlanet(Full, ptree);
}

void Juego::extractPlanet(string pline, unique_ptr<Arbin> & ptree) {
	string nombre, produccion;
	istringstream planet(pline);
	getline(planet, nombre, ' ');
	getline(planet, produccion, ' ');
	createPlanet(nombre, stoi(produccion),ptree);
}

void Juego::createPlanet(string pnombre, int pproduccion, unique_ptr<Arbin> & ptree) {
	shared_ptr<Planeta> newPlaneta(make_shared<Planeta>());
	newPlaneta->setNombre(pnombre);
	newPlaneta->setCantProduccion(pproduccion);
	insertPlanetTree(newPlaneta, ptree);
}

void Juego::insertPlanetTree(shared_ptr<Planeta> pplaneta, unique_ptr<Arbin>& ptree) {
	ptree->insertarElemento(pplaneta);
}

void Juego::setUpBases() {
	(arbol1->getRaiz())->getPlaneta()->setJugador(1);
	(arbol2->getRaiz())->getPlaneta()->setJugador(2);
}

void Juego::setUpUnidades() {
	arbol1->loadUnidadesProduccion(turno);
	arbol2->loadUnidadesProduccion(standBy);
}

void Juego::checkStandBy() {
	checkStandByEmpty();
}

void Juego::checkStandByEmpty() {
	( standBy ) ? checkStandByData() : makePlayer( standBy, 2 );
}

void Juego::checkStandByData() {
	( standBy->getNumJugador() == 0 ) ? standBy->setNumJugador( 2 ) : false;
}

void Juego::setNombres(string nombre1, string nombre2) {
	turno->setNombre(nombre1);
	standBy->setNombre(nombre2);
}

//========================================================================================================================//
//											 																			  //
//										    	SECCION TURNO 								     						  //
//																														  //
//========================================================================================================================//

void Juego::cambiarTurno() {
	turno->setCantMovidas(turno->getCantMovidas() + 1);
	turno.swap(standBy);
	if (primerTurno && turno->getNumJugador() == 1) {
		getCurrentPlayerTree()->loadUnidadesProduccion(turno);
		setCantMovidasMaximo(getCantMovidasMaximo() + 1);
	}
	else if (primerTurno && turno->getNumJugador() == 2) {
		primerTurno = false;
		setCantMovidasMaximo(getCantMovidasMaximo() + 1);
	}
	else {
		getCurrentPlayerTree()->loadUnidadesProduccion(turno);
		setCantMovidasMaximo(getCantMovidasMaximo() + 1);
	}
}

//========================================================================================================================//
//											 																			  //
//										    SECCION SCORE BOARD							     							  //
//																														  //
//========================================================================================================================//

int Juego::getPuntaje() {
	return 0;
}

//========================================================================================================================//
//											 																			  //
//										    SECCION ESTADO JUEGO						     							  //
//																														  //
//========================================================================================================================//

bool Juego::estadoJuego() {
	return false;
}

unique_ptr<Arbin>& Juego::getCurrentPlayerTree() {
	return ((turno->getNumJugador() == 1) ? arbol1 : arbol2);
}

unique_ptr<Arbin>& Juego::getOponentPlayerTree() {
	return ((standBy->getNumJugador() == 1) ? arbol1 : arbol2);
}

unique_ptr<Jugador>& Juego::getJugador(int pnumJugador) {
	return ( ( turno->getNumJugador() == pnumJugador ) ? turno : standBy );
}

shared_ptr<Planeta> Juego::getPlanet(string pnombre) {
	if (getOponentPlayerTree()->estaElemento(pnombre))
		return getOponentPlayerTree()->getPlaneta(pnombre);
	if(getCurrentPlayerTree()->estaElemento(pnombre))
		return getCurrentPlayerTree()->getPlaneta(pnombre);
	return nullptr;
}

bool Juego::searchPlanet(string pnombre) {
	if (getCurrentPlayerTree()->estaElemento(pnombre))
		return true;
	else if (getOponentPlayerTree()->estaElemento(pnombre))
		return true;
	return false;
}

//========================================================================================================================//
//											 																			  //
//										    SECCION ACCION INVADIR						     							  //
//																														  //
//========================================================================================================================//

bool Juego::invadir(int cantUnidades, string pnombre){
	return ((searchPlanet(pnombre)) ? invasionProccess(cantUnidades, getPlanet(pnombre)) : false);
}

bool Juego::invasionProccess(int cantUnidades, shared_ptr<Planeta> pplaneta) {
	bool temp;
	if (turno->getCatUnidadesDisponibles() >= cantUnidades)
		(pplaneta->canInvade(cantUnidades)) ? temp = pplaneta->invade(turno, cantUnidades) : temp = turno->invasionFail(cantUnidades),
		cambiarTurno();
	return temp;
}

//========================================================================================================================//
//											 																			  //
//												   SECCION DEFENSA						     							  //
//																														  //
//========================================================================================================================//

bool Juego::sacarUnidadesDefensa(int cantUnidades, string pnombre) {
	if (searchPlanet(pnombre))
		if (getPlanet(pnombre)->getCantDefensa() >= cantUnidades)
			for (int i = 0; i < cantUnidades; i++)
				turno->agregarUnidad(getPlanet(pnombre)->getUnidadDef());
		else
			return false;
	else
		return false;
	cambiarTurno();
	return true;
}

bool Juego::llenarUnidadesDefensa(int cantUnidades, string pnombre) {
	shared_ptr<Planeta> planeta;
	if (searchPlanet(pnombre)) {
		planeta = getPlanet(pnombre);
		if (turno->getCatUnidadesDisponibles() >= cantUnidades)
			for (int i = 0; i < cantUnidades; i++)
				planeta->agregarUnidadDefensa(turno->getUnidad());
		else
			return false;
	}
	else
		return false;
	cambiarTurno();
	return true;
}

bool Juego::moverUnidadesDefensaAotroPlaneta(int cantUnidades, string pplaneta1, string pplaneta2) {
	shared_ptr<Planeta> planeta1;
	shared_ptr<Planeta> planeta2;
	if (searchPlanet(pplaneta1)) {
		planeta1 = getPlanet(pplaneta1);
		if (searchPlanet(pplaneta2)) {
			planeta2 = getPlanet(pplaneta2);
			if (planeta1->getCantDefensa() >= cantUnidades)
				for (int i = 0; i < cantUnidades; i++)
					planeta2->agregarUnidadDefensa(planeta1->getUnidadDef());
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
	cambiarTurno();
	return true;
}

//========================================================================================================================//
//											 																			  //
//												   SECCION PLANETA						     							  //
//																														  //
//========================================================================================================================//

int Juego::getCantProdPlaneta(string pnombre) {
	return ( (searchPlanet(pnombre)) ? getPlanet(pnombre)->getCantProduccion() : 0 );
}

int Juego::getCantDefensaPlaneta(string pnombre) {
	return ((searchPlanet(pnombre)) ? getPlanet(pnombre)->getCantDefensa() : 0);
}

vector<int> Juego::getPlanetasConquistados()
{
	return getCurrentPlayerTree()->getPlanetasConquistados(turno);
}

vector<int> Juego::getPlanetasNeutrales()
{
	return getCurrentPlayerTree()->getPlanetasNeutrales(turno);
}

//========================================================================================================================//
//											 																			  //
//									       SECCION PLANETAS ( GENERAL )					     							  //
//																														  //
//========================================================================================================================//

vector<string> Juego::getNombresPlanetas1() {
	return arbol1->getListaPlanetas();
}

vector<string> Juego::getNombresPlanetas2() {
	return arbol2->getListaPlanetas();
}

vector<string> Juego::getNombresPlanetasTurno() {

	return ((turno->getNumJugador() == 1) ? getNombresPlanetas1() : getNombresPlanetas2());
}

vector<int> Juego::getProdPlanetas1() {
	return arbol1->getListaProduccion();
}

vector<int> Juego::getProdPlanetas2() {
	return arbol2->getListaProduccion();
}

vector<int> Juego::getDefensaPlanetas1() {
	return arbol1->getListaDefensa();
}

vector<int> Juego::getDefensaPlanetas2() {
	return arbol2->getListaDefensa();
}

int Juego::getCantPlanetasConq1() {
	return getJugador(1)->getPlanetasConquistados();
}

int Juego::getCantPlanetasConq2() {
	return getJugador(2)->getPlanetasConquistados();
}

int Juego::getCantPlanetasConqTurno() {
	return turno->getPlanetasConquistados();
}

int Juego::getCantPlanetasTotal() {
	return 18;
}