#include <iostream>
#include <string>
using namespace std;

void print(string, int n = 0);
int main(){
    string name = "What is your name? ";

    // Call 1
    cout << "Call 1: " << endl;
    print(name);
    // Call 2
    cout << "Call 2: " << endl;
    print(name);
    // Call 3
    cout << "Call 3: " << endl;
    print(name, 1);
    return 0;
}

void print(string name, int n ){
    static int times = 0;
    if(n){
        for(int i = 0; i <= times; i++)
            cout << name << endl;
    }
    else
        cout << name << endl;

    times ++;
}