#include "punct.h"
#include "forma.h"
#include "cerc.h"
#include "segment.h"
#include "triunghi.h"
#include <iostream>

using namespace std;

Punct A;
Punct B(1);
Punct C(2, 3);
Punct D = 1;
Punct E = C;

Forma F1;
Forma F2(C);

Cerc C1;
Cerc C2(C);
Cerc C3(D, 3.14);

Forma F(A);
Triunghi T1;

Forma* ptr;


int main() {

    cout << A.getX() << " " << A.getY() << endl;
    cout << B.getX() << " " << B.getY() << endl;
    cout << C.getX() << " " << C.getY() << endl;
    cout << D.getX() << " " << D.getY() << endl;
    cout << E.getX() << " " << E.getY() << endl;

    cout << "F1:" << F1.getLocatie().getX() << " ";
    cout << F1.getLocatie().getY() << endl;
    cout << "F2:" << F2.getLocatie().getX() << " ";
    cout << F2.getLocatie().getY() << endl;

    cout << "C1:" << C1.getLocatie().getX() << " ";
    cout << C1.getLocatie().getY() << " " << C1.getRaza() << endl;

    cout << "C2:" << C2.getLocatie().getX() << " ";
    cout << C2.getLocatie().getY() << " " << C2.getRaza() << endl;

    cout << "C3:" << C3.getLocatie().getX() << " ";
    cout << C3.getLocatie().getY() << " " << C3.getRaza() << endl;

    cout << "Perimetre:" << endl;
    cout << "->F1:" << F1.getPerimetru() << endl;
    cout << "->F2:" << F2.getPerimetru() << endl;
    cout << "->C1:" << C1.getPerimetru() << endl;
    cout << "->C2:" << C2.getPerimetru() << endl;
    cout << "->C3:" << C3.getPerimetru() << endl;

    cout << "Arii:" << endl;
    cout << "->F1:" << F1.getArie() << endl;
    cout << "->F2:" << F2.getArie() << endl;
    cout << "->C1:" << C1.getArie() << endl;
    cout << "->C2:" << C2.getArie() << endl;
    cout << "->C3:" << C3.getArie() << endl;

    ptr = &F;
    cout << "Despre forma : " << endl;
        cout << " Locatia : "<<ptr->getLocatie().getX() << " ";
        cout << ptr->getLocatie().getY() << endl;
    cout << "Perimetrul : " << ptr->getPerimetru() << endl;
    cout << "Aria:" << ptr->getArie() << endl;

    ptr = &C1;
    cout << "Despre cerc : " << endl; 
    cout << "Locatia : "<<ptr->getLocatie().getX() << " ";
    cout << ptr->getLocatie().getY() << endl;
    cout << "Perimetrul:" << ptr->getPerimetru() << endl;
    cout << "Aria:" << ptr->getArie() << endl;

    Forma* v[3];

    v[0] = &C1;
    v[1] = &C2;
    v[2] = &C3;

    /*
    for (int i = 0; i < 3; i++)
    {
        cout << v[i]->getArie() << endl;
    }
    */ 


    return 0;
}