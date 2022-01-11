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
    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch", 2.3, 350}};
    for(int i = 0; i < 3; i++)
        cout << "\nThe banch is " << snack[i].banch << "\nThen the weight is " << snack[i].weight << "\nlast the calorie is " << snack[i].calorie;

    return 0;
}