#include <iostream>
#include <array>

using namespace std;

int main(){
    array <double, 3> result;
    cout << "Enter there times result for your run: ";
    cin >> result[0];
    cin >> result[1];
    cin >> result[2];
    double average = 0;
    for(int i=0; i < 3; i++){
        average+=result[i];
    }
    average/=3;
    cout << "times: " << sizeof result/sizeof(double) << "\naverage scores: " << average;
    
    return 0;
}