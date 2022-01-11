#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    int sell_number[3][13] = {0};     // 最后一列是该年销售额的和
    int sell_sum = 0;
    for(int j = 1; j <= 3; j++){
        for(int i = 1; i <= 12; i++){
            cout << "Enter No." << j <<"'s year, and No." << i << "'s months sell number: ";
            cin >> sell_number[j][i];
            sell_number[j][12] += sell_number[j][i];
            sell_sum += sell_number[j][i];
        }
    }
    for(int j = 1 ; j <= 3 ; j++ ){
        cout << "The No." << j << "'s sell number is " << sell_number[j][12] << endl;
    }
    cout << "The sell number sum is " << sell_sum;
}