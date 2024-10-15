#ifndef __PUNCT_H
#define __PUNCT_H

class Punct {
private:
    int _x, _y;

public:
    void setX(int);
    int getX();
    void setY(int);
    int getY();

    Punct(int x = 0, int y = 0);
};

#endif