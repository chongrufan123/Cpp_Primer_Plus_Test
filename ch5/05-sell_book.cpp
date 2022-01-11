#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    array <int, 12> sell_number;
    int sell_sum = 0;
    for(int i = 1; i <= 12; i++){
        cout << "Enter No." << i << "'s sell number: ";
        cin >> sell_number[i];
        sell_sum += sell_number[i];
    }
    cout << "The sell number sum is " << sell_sum;
}