#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct car
{
    string banch;
    int year;
};


int main(){
    int catalog;
    cout << "How many cars do you wish to catalog? ";
    cin >> catalog;
    cin.get();
    car *some_car = new car[catalog];
    for(int i = 0 ; i <= catalog - 1; i++){
        cout << "Car #" << i << "\nPlease enter the make: ";
        getline(cin, some_car[i].banch);
        cout << "Please enter the year made: ";
        cin >> some_car[i].year;
        cin.get();
    }
    cout << "Here is your collection: " << endl;
    for(int i=1; i <= catalog ; i++){
        cout << some_car[i].year << " " << some_car[i].banch << endl;
    }

    return 0;
}