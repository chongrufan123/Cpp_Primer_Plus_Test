#include <iostream>
#include <string>

using namespace std;


int main(){
    string *banch = new string;
    int *lengh = new int;
    int *weight = new int;
    *lengh = 10;
    cout << "Enter pizza banch: ";
    getline(cin, *banch);
    cout << "Enter pizza lengh: ";
    cin >> *lengh;
    cout << "Enter pizza weight: ";
    cin >> *weight;

    cout << "your pizza is " << *banch << " banch. \nlengh is " << *lengh << "\nweight is "<< *weight;

}