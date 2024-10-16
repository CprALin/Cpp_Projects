#include "cerc.h"

Cerc::Cerc(Punct p , float r) : Forma(p) , _raza(r) {}
float Cerc::getRaza() { return _raza; }
void Cerc::setRaza(float r) { _raza = r; }
float Cerc::getPerimetru() { return 2 * 3.14 * _raza; }
float Cerc::getArie() { return 3.14 * _raza * _raza; }