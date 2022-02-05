#include "sales.h"
using namespace SALES;

int main(){

    cout << "No.1 insert" << endl;
    double ar[QUARTERS] = {1.1, 1.2, 4.3, 0.5};
    Sales one(ar, 4);
    cout << "No.2 insert" << endl;
    Sales two;

    cout << "No.1 show: " << endl;
    one.showSales();
    cout << "\nNo.2 show: " << endl;
    two.showSales();

    return 0;
}