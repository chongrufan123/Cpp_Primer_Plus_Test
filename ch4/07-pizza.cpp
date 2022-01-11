#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string banch;
    int lengh;
    int weight;
};

int main(){
    Pizza pizza_one;
    cout << "Enter pizza banch: ";
    getline(cin, pizza_one.banch);
    cout << "Enter pizza lengh: ";
    cin >> pizza_one.lengh;
    cout << "Enter pizza weight: ";
    cin >> pizza_one.weight;

    cout << "your pizza is " << pizza_one.banch << " banch. \nlengh is " << pizza_one.lengh << "\nweight is "<< pizza_one.weight;

}