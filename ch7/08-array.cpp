#include <iostream>

const int Seasons = 4;
const char *Snames[4] = {"Spring", "Summer", "Fall", "Winter"};
using namespace std;

void fill(double *);
void show(double *);
int main(){
    double expenses[4];
    fill(expenses);
    show(expenses);
}

void fill(double expenses[]){
    for(int i = 0; i < Seasons; i++){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> expenses[i];
    }
}
void show(double expenses[]){
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++){
        cout << Snames[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}