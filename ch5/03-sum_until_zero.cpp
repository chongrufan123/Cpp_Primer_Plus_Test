#include <iostream>

using namespace std;

int main(){
    cout << "Enter number, input 0 end: " << endl;
    double i, sum = 0;
    for(; i != 0 ; ){
        cin >> i;
        sum+=i;
    }
    cout << "The sum is " << sum << endl;

    return 0;
}