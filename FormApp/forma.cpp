#include "forma.h"

Forma::Forma(Punct p) {
	_locatie = p;
}

float Forma::getPerimetru() { return 0; }

float Forma::getArie() { return 0; }

void Forma::setLocatie(Punct p) {
	_locatie = p;
}

Punct Forma::getLocatie() {
	return _locatie;
}