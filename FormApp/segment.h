#ifndef __SEGMENT_H
#define __SEGMENT_H
#include "punct.h"

class Segment {
	private:
		Punct _B;

	public:
		Punct getPunctB();
		void setPunctB(Punct p);
};

#endif