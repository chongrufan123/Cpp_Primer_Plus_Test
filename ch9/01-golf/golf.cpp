#include "golf.h"
#include <iostream>
#include <cstring>

using namespace std;

void setgolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

void setgolf(golf &g){
    char name[Len];
    int hc;
    cout << "Enter the fullname: " << endl;
    cin.getline(name, Len);
    cout << "Enter the handicap: " << endl;
    cin >> hc;
    cin.get();
    setgolf(g, name, hc);
}

void handicap(golf &g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    cout << "The fullname is " << g.fullname << endl;
    cout << "The handicap is " << g.handicap << endl;
}
