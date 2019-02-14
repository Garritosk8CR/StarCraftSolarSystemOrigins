#include "FabricaUnidades.h"

unique_ptr<I_Unidad> & FabricaUnidades::crearUnidad(int ptipo, unique_ptr<I_Unidad> & r, int cont) {
	switch (ptipo) {
	case 1:
		r = make_unique<Unidad>();
		r->setNombre("unidad " + to_string(cont));
		return r;
		break;
	default:
		return r;
		break;
	}
}
FabricaUnidades::FabricaUnidades() { }
FabricaUnidades::~FabricaUnidades() { }