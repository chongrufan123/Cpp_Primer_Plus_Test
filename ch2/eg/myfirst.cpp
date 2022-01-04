// 程序都太简单了，之后的不想敲了
#include <iostream>
#include <cmath>
using namespace std;

int myfirst(){
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!" << endl;
    return 0;
}

int carrots(){
    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots--;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    return 0;
}

int getinfo(){
    int carrots;
    cout << "How many carrots do you have" << endl;
    cin >> carrots;
    cout << "Here are two more";
    carrots = carrots + 2;
    double a = sqrt(6.26);
    cout << "Now you have " << carrots << " carrots." << "a = " << a << endl;
    return 0;
}

int main(){
    // myfirst();
    // carrots();
    getinfo();
    return 0; 
}