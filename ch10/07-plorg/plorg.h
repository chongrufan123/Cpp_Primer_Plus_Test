#ifndef PLORG_H_
#define PLORG_H_
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE = 19;

class Plorg{
private:
    char name[MAX_SIZE];
    int CI;
public:
    Plorg(char const * m_name = "Plorga", int m_ci = 50);
    const void resetci(int m_ci);
    const void show() const;
};


#endif