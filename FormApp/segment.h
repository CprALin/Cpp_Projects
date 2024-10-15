#ifndef __SEGMENT_H
#define __SEGMENT_H
#include "punct.h"

class Segment {
	Punct _B;

public:
	int getPunctB();
	void setPunctB(Punct p);

	Segment(Punct p = Punct(0, 0), Punct _B);
};

#endif
