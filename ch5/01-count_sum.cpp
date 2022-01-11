#include <iostream>

using namespace std;

int main(){
    int min, max, sum = 0;
    cout << "Please Enter number: ";
    cin >> min;
    cin >> max;
    for(; max >= min ; max--){
        sum += max;
    }
    cout << "The sum between two number is " << sum;

    return 0;
}