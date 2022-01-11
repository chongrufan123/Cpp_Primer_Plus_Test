#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string banch;
    float weight;
    int calorie;
};


int main(){
    CandyBar snack;
    snack = {"Mocha Munch", 2.3, 350};
    cout << "The banch is " << snack.banch << "\nThen the weight is " << snack.weight << "\nlast the calorie is " << snack.calorie;

    return 0;
}