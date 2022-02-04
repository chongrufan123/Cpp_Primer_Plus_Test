#include "golf.h"


Golf::Golf(const char * name, int hc){
    strcpy(this->fullname, name);
    this->handicap = hc;
}

Golf::Golf(){
    char name[Len];
    int hc;
    cout << "Enter the fullname: " << endl;
    cin.getline(name, Len);
    cout << "Enter the handicap: " << endl;
    cin >> hc;
    cin.get();
    strcpy(this->fullname, name);
    this->handicap = hc;
}

const Golf & Golf::setgolf(const Golf & gg){
    strcpy(this->fullname, gg.fullname);
    this->handicap = gg.handicap;

    return *this;
}

void Golf::showgolf(){
    cout << "The fullname is " << this->fullname << endl;
    cout << "The handicap is " << this->handicap << endl;
}
