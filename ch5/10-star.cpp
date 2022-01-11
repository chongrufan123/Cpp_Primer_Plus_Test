#include <iostream>

int main(){
    using namespace std;
    int count;
    cout << "Enter number of rows: ";
    cin >> count;
    for(int i = 1; i < count ; i++){
        for(int j = 1; i + j <= count; j++)
            cout << ".";
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}