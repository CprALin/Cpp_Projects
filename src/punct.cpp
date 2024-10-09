#include "punct.h"

void Punct::setX(int x){
    _x = x;
}

int Punct::getX(){
    return _x;
}

void Punct::setY(int y){
    _y = y;
}

int Punct::getY(){
    return _y;
}

Punct::Punct(int x , int y){
    _x = x;
    _y = y;
}

