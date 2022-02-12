#include "cow.h"
#include <iostream>

using namespace std;

int main(){
    Cow a;
    Cow b("fan", "play football", 150);
    Cow c(b);

    cout << "a is " << endl;
    a.ShowCow();
    cout << "b is " << endl;
    b.ShowCow();
    cout << "c is " << endl;
    c.ShowCow();

    a = c;
    cout << "now a is " << endl;
    a.ShowCow();

    return 0;
}