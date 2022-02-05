#ifndef SALES_H_
#define SLAES_H_

#include <iostream>
using namespace std;

const int QUARTERS = 4;
namespace SALES
{
    class Sales{
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales(const double ar[], int n);
        Sales();
        void showSales() const;

    };
 
}

#endif