#include <iostream>
#include <string>
using namespace std;

struct person
{
    int age;
    char first_name[10];
    char last_name[10];
    char deserve;
};

int main(){
    person one;
    cout << "What is your first name? ";
    cin.getline(one.first_name, 10);
    cout << "What is your last name? ";
    cin.getline(one.last_name, 10);
    cout << "What letter grade do you deserve? ";
    cin >> one.deserve;
    cout << "What is your age? ";
    cin >> one.age;

    cout << "Name: " << one.last_name << ", " << one.first_name << "\nGrade: " << ++one.deserve << "\nAge: " << one.age;

    return 0;
}
