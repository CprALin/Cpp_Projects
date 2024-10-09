#include "../include/punct.h"
#include <iostream>

using namespace std;

Punct A;
Punct B(1);
Punct C(2,3);
Punct D = 1;
Punct E = C;

int main(){

    cout << A.getX() << " " << A.getY() << endl;
    cout << B.getX() << " " << B.getY() << endl;
    cout << C.getX() << " " << C.getY() << endl;
    cout << D.getX() << " " << D.getY() << endl;
    cout << E.getX() << " " << E.getY() << endl;

    return 0;
}