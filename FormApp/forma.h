#ifndef __FORMA_H
#define __FORMA_H
#include "punct.h"

class Forma {
	Punct _locatie;
public:
	virtual float getPerimetru();
	virtual float getArie();
	void setLocatie(Punct p);
	Punct getLocatie();
	Forma(Punct p = Punct(0, 0));
};
#endif 
