#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    char first_name[20];
    char last_name[20];

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    strcat(strcat(first_name, ", "), last_name);

    cout << "Here's the information in a single string: " << first_name << endl;

    return 0;
}