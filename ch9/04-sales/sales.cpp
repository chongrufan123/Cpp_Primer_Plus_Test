#include "sales.h"
#include <iostream>

namespace SALES
{
    using namespace std;
    void setSales(Sales &s, const double ar[], int n){
        int i;
        double min = ar[0], max = ar[0], ave = 0;
        for( i = 0; i < n; i++){
            s.sales[i] = ar[i];
            ave += ar[i];
            if(min > ar[i])
                min = ar[i];
            if(max < ar[i])
                max = ar[i];
        }
        ave /= 4.0;
        s.average = ave;
        s.max = max;
        s.min = min;
    }
    void setSales(Sales & s){
        cout << "Enter sale members(use space to split): " << endl;
        int i = 0;
        double ar[QUARTERS];
        while(i < 4){
            cin >> ar[i];
            i++;
        }
        SALES::setSales(s, ar, 4);
    }

    void showSales(const Sales & s){
        cout << "The average is " << s.average << endl;
        cout << "The min is " << s.min << endl;
        cout << "The max is " << s.max << endl;
    }
} // namespace SALES

