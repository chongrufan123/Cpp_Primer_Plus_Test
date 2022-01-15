#include <iostream>

double arrange(double, double);
int main(){
    using namespace std;
    double a, b;
    cout << "Enter two numbers(use 0 end): " << endl;
    while(1){
        cin >> a;
        cin >> b;
        cin.get();
        if(a != 0.0 && b != 0.0)
            cout << arrange(a, b) << endl;
        else
            break;
    }
    cout << "done" << endl;
    return 0;
}

double arrange(double a, double b){
    return 2.0 * a * b / (a + b);
}