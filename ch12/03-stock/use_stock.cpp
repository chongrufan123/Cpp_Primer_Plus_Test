#include <iostream>
#include "stock30.h"

int main(){
    using std::cout;
    using std::endl;
    cout << "Using constructors to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0);
    cout << stock1 << endl;
    Stock stock2 = Stock ("Boffo Objects", 2, 2.0);
    cout << stock2 << endl;

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2:\n";
    cout << stock1 << endl;
    cout << stock2 << endl;

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    cout << stock1 << endl;
    cout << "Done!\n";
    return 0;
}