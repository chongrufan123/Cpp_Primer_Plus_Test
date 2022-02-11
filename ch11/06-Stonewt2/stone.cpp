#include "stonewt.h"
#include <iostream>
using namespace std;

Stonewt min(Stonewt * a, int lenght);
Stonewt max(Stonewt * a, int lenght);
int count(Stonewt * a, int lenght, int stone);

int main(){
    Stonewt weight[6];
    weight[0] = Stonewt(11, 0);
    weight[1] = Stonewt(231.4);
    weight[2] = Stonewt(8, 42.1);

    int i = 3;
    double lbs;
    cout << "Enter pounds (q to quit): ";
    while(i < 6){
        if(!(cin >> lbs)){
            break;
        }
        weight[i] = Stonewt(lbs);
        i++;
        if(i < 6){
            cout << "Enter again: ";
        }
    }

    cout << "min weight is " << min(weight, 6) << endl;
    cout << "max weight is " << max(weight, 6) << endl;
    cout << "the numbers of >= 11 stone has " << count(weight, 6, 11) << endl;
}

Stonewt min(Stonewt * a, int lenght){
    Stonewt min = a[0];
    int i = 1;
    while(i < lenght){
        if(min > a[i]){
            min = a[i];
        }
        i++;
    }
    return min;
}
Stonewt max(Stonewt * a, int lenght){
    Stonewt max = a[0];
    int i = 1;
    while(i < lenght){
        if(max < a[i]){
            max = a[i];
        }
        i++;
    }
    return max;
}
int count(Stonewt * a, int lenght, int stone){
    Stonewt temp(stone, 0);
    int i = 0, count = 0;
    while(i < lenght){
        if(a[i] >= temp){
            count++;
        }
        i++;
    }
    return count;
}