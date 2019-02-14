#pragma once
#ifndef JUEGO_H
#define JUEGO_H
#include "Arbin.h"
#include "Jugador.h"
#include <vector>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <fstream>

class Arbin;
class Jugador;


class Juego {
private:
	int cantMovidasMaximo;
	unique_ptr<Arbin> arbol1;
	unique_ptr<Arbin> arbol2;
	unique_ptr<Jugador> standBy;
	unique_ptr<Jugador> turno;
	bool finish;
	bool primerTurno;
	//========================================================================================================================//
	//																														  //
	//											 SECCION CHECK PLAYERS                                                        //
	//																														  //
	//========================================================================================================================//

	void checkPlayers();
	void checkTurno();
	void checkTurnoEmpty();
	void checkTurnoData();
	void checkStandBy();
	void checkStandByEmpty();
	void checkStandByData();
	void makePlayer(unique_ptr<Jugador> & pplayer, int pnumPlayer);
	

	//========================================================================================================================//
	//																														  //
	//											 SECCION CHECK TREES                                                          //
	//																														  //
	//========================================================================================================================//

	void checkTrees();
	void checkTree(unique_ptr<Arbin> & ptree);
	void checkTreeEmpty(unique_ptr<Arbin> & ptree);
	void checkTreeData(unique_ptr<Arbin> & ptree);
	void makeTree(unique_ptr<Arbin> & ptree);
	//========================================================================================================================//
	//																														  //
	//											 SECCION LOAD PLANETS                                                         //
	//																														  //
	//========================================================================================================================//

	void loadPlanets();
	void openPlanets(string pfile, unique_ptr<Arbin> & ptree);
	void extractPlanet(string pline, unique_ptr<Arbin> & ptree);
	void createPlanet(string pnombre, int pproduccion, unique_ptr<Arbin> & ptree);
	void insertPlanetTree(shared_ptr<Planeta> pplaneta, unique_ptr<Arbin> & ptree);
	void setUpBases();

	//========================================================================================================================//
	//																														  //
	//											 SECCION SET UP UNIDADES                                                      //
	//																														  //
	//========================================================================================================================//
	void setUpUnidades();

	//========================================================================================================================//
	//																														  //
	//											 SECCION CURRENT STATE                                                        //
	//																														  //
	//========================================================================================================================//

	unique_ptr<Arbin> & getCurrentPlayerTree();
	unique_ptr<Arbin> & getOponentPlayerTree();
	shared_ptr<Planeta> getPlanet(string pnombre);
	bool searchPlanet(string pnombre);
	unique_ptr<Jugador> & getJugador(int pnumJugador);

	//========================================================================================================================//
	//																														  //
	//											 SECCION PROCESO INVASION                                                     //
	//																														  //
	//========================================================================================================================//

	bool invasionProccess(int cantUnidades, shared_ptr<Planeta> pplaneta);


public:
	Juego();
	~Juego();
	void setCantMovidasMaximo(int pcantMovidas);
	int getCantMovidasMaximo();

	int getCantUnidadesTurno();
	int getCantUnidadesStandBy();
	int getCantUnidadesJugador1();
	int getCantUnidadesJugador2();

	void setUp();
	void cambiarTurno();
	int getPuntaje();
	bool estadoJuego();
	void setNombres(string nombre1,string nombre2);
	string getNomPlayer1();

	bool invadir(int cantUnidades, string pnombre);
	bool sacarUnidadesDefensa(int cantUnidades, string pnombre);
	bool llenarUnidadesDefensa(int cantUnidades, string pnombre);
	bool moverUnidadesDefensaAotroPlaneta(int cantUnidades, string pplaneta1, string pplaneta2);

	vector<string> getNombresPlanetas1();
	vector<string> getNombresPlanetas2();
	vector<string> getNombresPlanetasTurno();
	vector<int> getProdPlanetas1();
	vector<int> getProdPlanetas2();
	vector<int> getDefensaPlanetas1();
	vector<int> getDefensaPlanetas2();
	int getCantProdPlaneta(string pnombre);
	int getCantDefensaPlaneta(string pnombre);
	vector<int> getPlanetasConquistados();
	vector<int> getPlanetasNeutrales();

	int getCantPlanetasConq1();
	int getCantPlanetasConq2();
	int getCantPlanetasConqTurno();
	int getCantPlanetasTotal();
};
#endif // !JUEGO_H