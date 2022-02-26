#include "wine.h"
#include <iostream>



Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : name(l), year(y), year_num(ArrayInt(yr, y), ArrayInt(bot, y)){
}
Wine::Wine(const char * l, int y) : name(l), year(y), year_num(ArrayInt(y), ArrayInt(y)){

}
void Wine::GetBottles(){
    int y, b;
    using std::cout;
    using std::endl;
    using std::cin;
    cout << "Enter " << name << " data for " << year << " year(s): " << endl;
    for(int i = 0; i < year; ++i){
        cout << "Enter year: ";
        cin >> y;
        year_num.first()[i] = y;
        cout << "Enter bottles for that year: ";
        cin >> b;
        year_num.second()[i] = b;
    }
}

void Wine::Show() const{
    using std::cout;
    using std::endl;
    cout << "Wine: " << name << endl;
    cout << "\t" << "Year\tBottles" << endl;
    for(int i = 0; i < year; ++i){
        cout << "\t" << year_num.first()[i] << "\t" << year_num.second()[i] << endl;
    }
}

