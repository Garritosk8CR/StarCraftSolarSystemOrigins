#include "Arbin.h"

Arbin::Arbin() { }

bool Arbin::makeNodo(unique_ptr<I_NodoArbol> & r,shared_ptr<Planeta> pplaneta){
	r = make_unique<NodoArbin>();
	r->setPlaneta(pplaneta);
	return true;
}

bool Arbin::estaElemento(shared_ptr<Planeta> pplaneta) {
	return ( (isNewNodo(this->raiz,pplaneta)) ?  true : estaElemRecursivo(this->raiz, pplaneta) );
}

bool Arbin::estaElemRecursivo(unique_ptr<I_NodoArbol> & r, shared_ptr<Planeta> pplaneta) {
	if( equals(r,pplaneta) )
		return true;
	auto &aux = getMayor_O_Menor(r,pplaneta);
	return (isNodoEmpty(aux)) ? false : estaElemRecursivo(aux, pplaneta);
}

bool Arbin::estaElemento(string pnombre) {
	return ( ( (raiz->getPlaneta())->getNombre() == pnombre ) ? true : estaElemRecursivo( raiz, pnombre ) );
}

bool Arbin::estaElemRecursivo(unique_ptr<I_NodoArbol>& r, string pnombre) {
	if ( equals( r, pnombre ) )
		return true;
	if ( r->getHijoIzq() )
		return estaElemRecursivo( r->getHijoIzq(), pnombre );
	if ( r->getHijoDer() )
		return estaElemRecursivo( r->getHijoDer(), pnombre );
	else
		return false;
}

bool Arbin::equals(unique_ptr<I_NodoArbol>& r, string pnombre) {
	return ( ( ( r->getPlaneta()->getNombre() ) == pnombre ) ? true : false );
}

bool Arbin::equals(unique_ptr<I_NodoArbol> &r, shared_ptr<Planeta> pplaneta){
	if (  ( (r->getPlaneta()->getNombre()) == (pplaneta->getNombre())  ) &&
		 ( (r->getPlaneta()->getCantProduccion()) == (pplaneta->getCantProduccion()) ) )
		return true;
	return false;
}


unique_ptr<I_NodoArbol> & Arbin::getMayor_O_Menor(unique_ptr<I_NodoArbol> &r, shared_ptr<Planeta> pplaneta){
	if (pplaneta->getCantProduccion() > r->getPlaneta()->getCantProduccion())
		return r->getHijoDer();
	return r->getHijoIzq();
}

bool Arbin::insertarElemento(shared_ptr<Planeta> pElem) {
	if (estaElemento(pElem))
		return false;
	return insertarElemRecursivo(this->raiz, pElem);
}

shared_ptr<Planeta> Arbin::getPlaneta(string pnombre) {
	return ( ( (raiz->getPlaneta())->getNombre() == pnombre ) ? (raiz->getPlaneta()) : getPlanetaRecursivo( raiz, pnombre ) );
}

shared_ptr<Planeta> Arbin::getPlanetaRecursivo(unique_ptr<I_NodoArbol>& r, string pnombre) {
	if ( equals( r, pnombre ) )
		return r->getPlaneta();
	if ( r->getHijoIzq() )
		return getPlanetaRecursivo( r->getHijoIzq(), pnombre );
	if ( r->getHijoDer() )
		return getPlanetaRecursivo( r->getHijoDer(), pnombre );
	return nullptr;
}

void Arbin::loadUnidadesProduccion(unique_ptr<Jugador>& pjugador) {
	loadUnidadesProduccionRecursivo(raiz, pjugador);
}

void Arbin::loadUnidadesProduccionRecursivo(unique_ptr<I_NodoArbol>& r, unique_ptr<Jugador>& pjugador) {
	if ( (r->getPlaneta())->getJugador() == pjugador->getNumJugador() )
		setUnidadesJugador(r, pjugador);
	if (r->getHijoIzq())
		loadUnidadesProduccionRecursivo(r->getHijoIzq(), pjugador);
	if (r->getHijoDer())
		loadUnidadesProduccionRecursivo(r->getHijoDer(), pjugador);
}

void Arbin::setUnidadesJugador(unique_ptr<I_NodoArbol>& r, unique_ptr<Jugador>& pjugador) {
	shared_ptr<Planeta> planeta = r->getPlaneta();
	int longitud =  planeta->getCantProduccion() / 4;
	if(planeta->getProduccionRestante() >= longitud)
		for(int i =0; i < longitud; i++)
			pjugador->agregarUnidad(planeta->getUnidadProd());
}


bool Arbin::insertarElemRecursivo(unique_ptr<I_NodoArbol> & r, shared_ptr<Planeta> pplaneta) {
	return( (isNewNodo(r,pplaneta)) ? true : insertarElemRecursivo(getMayor_O_Menor(r,pplaneta), pplaneta) );
}

vector<string> Arbin::getListaPlanetas() {
	vector<string> * resul = new vector<string>;
	getListaPlanetasRecursivo(getRaiz(), resul);
	return *resul;
}

void Arbin::getListaPlanetasRecursivo(unique_ptr<I_NodoArbol>& r, vector<string> * plista) {
	if (r != NULL)
		plista->push_back(r->getPlaneta()->getNombre());
	if (r->getHijoIzq())
		getListaPlanetasRecursivo(r->getHijoIzq(), plista);
	if (r->getHijoDer())
		getListaPlanetasRecursivo(r->getHijoDer(), plista);
}

vector<int> Arbin::getListaProduccion() {
	vector<int> * resul = new vector<int>;
	getListaProduccionRecursivo(getRaiz(), resul);
	return *resul;
}

void Arbin::getListaProduccionRecursivo(unique_ptr<I_NodoArbol>& r, vector<int>* plista) {
	if (r != NULL)
		plista->push_back(r->getPlaneta()->getCantProduccion());
	if (r->getHijoIzq())
		getListaProduccionRecursivo(r->getHijoIzq(), plista);
	if (r->getHijoDer())
		getListaProduccionRecursivo(r->getHijoDer(), plista);
}

vector<int> Arbin::getListaDefensa() {
	vector<int> * resul = new vector<int>;
	getListaDefensaRecursivo(getRaiz(), resul);
	return *resul;
}

vector<int> Arbin::getPlanetasConquistados(unique_ptr<Jugador> & pjugador)
{
	vector<int> * resul = new vector<int>;
	getPlanetasConquistadosRecursivo(getRaiz(), resul, pjugador, 0);
	return *resul;
}

vector<int> Arbin::getPlanetasNeutrales(unique_ptr<Jugador>& pjugador)
{
	vector<int> * resul = new vector<int>;
	getPlanetasNeutralesRecursivo(getRaiz(), resul, pjugador, 0);
	return *resul;
}

void Arbin::getListaDefensaRecursivo(unique_ptr<I_NodoArbol>& r, vector<int>* plista) {
	if (r != NULL)
		plista->push_back(r->getPlaneta()->getCantDefensa());
	if (r->getHijoIzq())
		getListaDefensaRecursivo(r->getHijoIzq(), plista);
	if (r->getHijoDer())
		getListaDefensaRecursivo(r->getHijoDer(), plista);
}

void Arbin::getPlanetasConquistadosRecursivo(unique_ptr<I_NodoArbol>& r, vector<int>* plista, unique_ptr<Jugador> & pjugador, int pcont)
{
	if (r != NULL)
		if (r->getPlaneta()->getJugador() == pjugador->getNumJugador())
			plista->push_back(pcont++);
		else
			pcont++;
	if (r->getHijoIzq())
		getPlanetasConquistadosRecursivo(r->getHijoIzq(), plista, pjugador, pcont);
	if (r->getHijoDer())
		getPlanetasConquistadosRecursivo(r->getHijoDer(), plista, pjugador, pcont);
}

void Arbin::getPlanetasNeutralesRecursivo(unique_ptr<I_NodoArbol>& r, vector<int>* plista, unique_ptr<Jugador>& pjugador, int pcont)
{
	if (r != NULL)
		if (r->getPlaneta()->getJugador() == 0)
			plista->push_back(pcont++);
		else
			pcont++;
	if (r->getHijoIzq())
		getPlanetasConquistadosRecursivo(r->getHijoIzq(), plista, pjugador, pcont);
	if (r->getHijoDer())
		getPlanetasConquistadosRecursivo(r->getHijoDer(), plista, pjugador, pcont);
}


unique_ptr<I_NodoArbol>& Arbin::getRaiz() { return raiz; }

void Arbin::setRaiz(unique_ptr<I_NodoArbol>  praiz) { raiz = move(praiz); }

bool Arbin::isNewNodo(unique_ptr<I_NodoArbol> &r,shared_ptr<Planeta> pplaneta){ return	( (isNodoEmpty(r)) ? makeNodo(r,pplaneta) : false ); }

bool Arbin::isNodoEmpty(unique_ptr<I_NodoArbol> &r){ return ((!r)? true : false); }