#include "sales.h"

namespace SALES
{
    Sales::Sales(const double ar[], int n){
        int i;
        double min = ar[0], max = ar[0], ave = 0;
        for( i = 0; i < n; i++){
            this->sales[i] = ar[i];
            ave += ar[i];
            if(min > ar[i])
                min = ar[i];
            if(max < ar[i])
                max = ar[i];
        }
        ave /= 4.0;
        this->average = ave;
        this->max = max;
        this->min = min;
    }
    Sales::Sales(){
        cout << "Enter sale members(use space to split): " << endl;
        int i = 0;
        double ar[QUARTERS];
        while(i < 4){
            cin >> ar[i];
            i++;
        }
        i = 0;
        double min = ar[0], max = ar[0], ave = 0;
        for( i = 0; i < 4; i++){
            this->sales[i] = ar[i];
            ave += ar[i];
            if(min > ar[i])
                min = ar[i];
            if(max < ar[i])
                max = ar[i];
        }
        ave /= 4.0;
        this->average = ave;
        this->max = max;
        this->min = min;
    }

    void Sales::showSales() const{
        cout << "The average is " << this->average << endl;
        cout << "The min is " << this->min << endl;
        cout << "The max is " << this->max << endl;
    }
} // namespace SALES

