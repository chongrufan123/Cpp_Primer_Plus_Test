#include "stonewt.h"
#include <iostream>
using namespace std;

int main(){
    Stonewt a(512.9, Stonewt::PDS);
    Stonewt b(100, 22.1);
    Stonewt c;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << "a + b: " << a + b << endl;
    cout << "a - b: " << a - b << endl;
    cout << "b - a: " << b - a << endl;

    cout << "a * 5.5: " << a * 5.5 << endl;
    cout << "9.3 * b: " << 9.3 * b << endl;

    return 0; 
}