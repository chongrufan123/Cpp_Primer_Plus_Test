#include "person.h"

int main(){
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    cout << endl;
    one.FormalShow();

    two.Show();
    cout << endl;
    two.FormalShow();

    three.Show();
    cout << endl;
    three.FormalShow();
}