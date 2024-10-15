#include "cerc.h"

Cerc::Cerc(Punct p , float r) : Forma(p) , _raza(r) {}
float Cerc::getRaza() { return _raza; }
void Cerc::setRaza(float r) { _raza = r; }