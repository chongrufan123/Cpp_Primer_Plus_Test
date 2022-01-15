#include <iostream>

long double probability(int, int);
int main(){
    using namespace std;
    int field, select;
    cout << "Enter the field number on the game card and\n"
            "the number of select number:\n";
    while((cin >> field >> select ) && field >= 5){
        cout << "You have one chance in ";
        cout << probability(field, select);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

long double probability(int field, int select){
    using namespace std;
    long double field_result = field;
    for(int i = 4; i > 0; i--){
        field_result *= (field_result - i);
    }
    field_result /= double(5 * 4 * 3 * 2 * 1);
    field_result = 1 / field_result;
    field_result *= (1 / double(select));

    return field_result;
}