#include <iostream>
#include <string>

struct donation
{
    std::string name;
    double money;
};


int main(){
    using namespace std;
    int count;
    cout << "Enter the number of donation: ";
    cin >> count;
    cin.get();
    donation *person = new donation [count];
    for(int i = 0; i < count; i++){
        cout << "Number D#" << i+1 << ":" << endl;
        cout << "Please enter name: ";
        getline(cin, person[i].name);
        cout << "Please enter money: ";
        cin >> person[i].money;
        cin.get();
    }
    int i = 0;
    cout << "Grand Patrons: " << endl;
    while( i < count ){
        if(person[i].money > 10000){
            cout << "name: " << person[i].name << "\tmoney: " << person[i].money << endl;
        }
        i++;
    }
    i = 0;
    cout << "Patrons: " << endl;
    while( i < count ){
        if(person[i].money <= 10000){
            cout << "name: " << person[i].name << "\tmoney: " << person[i].money << endl;
        }
        i++;
    }
    delete [] person;
    return 0;
}