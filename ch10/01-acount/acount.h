#ifndef ACOUNT_H_
#define ACOUNT_H_
#include <string>
#include <cstring>
#include <iostream>

using namespace std;
#define Maxsize 20

class Acount{
private:
    string name;
    char number[Maxsize];
    float deposit;

public:
    Acount(string const m_name, char const m_number[Maxsize], float m_deposit);
    void show();
    void save(float money);
    void load(float money);
};


#endif
