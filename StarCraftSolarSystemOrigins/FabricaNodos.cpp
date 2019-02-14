#include "FabricaNodos.h"

shared_ptr<I_Nodo> FabricaNodos::crearNodo(int ptipo) {
	shared_ptr<I_Nodo> nodo;
	switch (ptipo) {
	case 1:
		return nodo = make_shared<NodoPila>();
		break;
	/*case 2:
		//return nodo = make_shared<NodoCola>();
		break;
	case 3:
		break;*/
	default:
		return nullptr;
		break;
	}
}
