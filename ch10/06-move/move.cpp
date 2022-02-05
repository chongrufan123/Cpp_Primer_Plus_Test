#include "move.h"

Move::Move(double a, double b){
    this->x = a;
    this->y = b;
}

void Move::showmove() const{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

Move Move::add(const Move & m){
    this->x += m.x;
    this->y += m.y;
    return *this;
}

void Move::reset(double a, double b){
    this->x = a;
    this->y = b;
}