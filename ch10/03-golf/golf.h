// golf.h -- for pe9-1.cpp
#ifndef GOLF_H_
#define GOLF_H_

#include <iostream>
#include <cstring>

using namespace std;

const int Len = 40;
class Golf{
private:
    char fullname[Len];
    int handicap;

public:
    Golf(const char * name, int hc);
    Golf();
    const Golf & setgolf(const Golf & gg);
    void showgolf();
};

#endif 