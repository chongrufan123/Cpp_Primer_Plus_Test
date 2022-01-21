#include "sales.h"
#include <iostream>
using namespace SALES;
using namespace std;

int main(){
    Sales one;
    Sales two;

    cout << "No.1 insert" << endl;
    double ar[QUARTERS] = {1.1, 1.2, 4.3, 0.5};
    setSales(one, ar, 4);
    cout << "No.2 insert" << endl;
    setSales(two);

    cout << "No.1 show: " << endl;
    showSales(one);
    cout << "\nNo.2 show: " << endl;
    showSales(two);

    return 0;
}