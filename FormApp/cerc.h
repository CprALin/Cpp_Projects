#ifndef __CERC_H
#define __CERC_H

#include "forma.h"

class Cerc : public Forma {
	float _raza;

public:
	float getRaza();
	void setRaza(float r);
	Cerc(Punct p = Punct(0, 0), float r = 0);
};

#endif
