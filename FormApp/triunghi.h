#ifndef __TRIUNGHI_H
#define __TRIUNGHI_H
#include "punct.h"

class Triunghi {
	private:
		Punct _B;
		Punct _C;

	public:
		Punct getPunctB();
		Punct getPunctC();
		void setPunctB(Punct p);
		void setPunctC(Punct p);
};

#endif 
