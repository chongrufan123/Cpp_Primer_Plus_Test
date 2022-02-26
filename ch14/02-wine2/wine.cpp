#include "wine.h"
#include <iostream>



Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), year(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)){
}
Wine::Wine(const char * l, int y) : std::string(l), year(y), PairArray(ArrayInt(y), ArrayInt(y)){

}
void Wine::GetBottles(){
    int y, b;
    using std::cout;
    using std::endl;
    using std::cin;
    cout << "Enter " << Label() << " data for " << year << " year(s): " << endl;
    for(int i = 0; i < year; ++i){
        cout << "Enter year: ";
        cin >> y;
        PairArray::first()[i] = y;
        cout << "Enter bottles for that year: ";
        cin >> b;
        PairArray::second()[i] = b;
    }
}

void Wine::Show() const{
    using std::cout;
    using std::endl;
    cout << "Wine: " << Label() << endl;
    cout << "\t" << "Year\tBottles" << endl;
    for(int i = 0; i < year; ++i){
        cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
    }
}

