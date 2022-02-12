#include "stack.h"
#include <iostream>

using namespace std;

int main(){
    Stack a(8);
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    Item temp;
    Stack b = a;
    Stack c(a);
    b.pop(temp);
    b.pop(temp);
    b.pop(temp);
    cout << temp << endl;
    b.pop(temp);
    b.pop(temp);
    cout << b.isempty() << endl;
    Stack d(2);
    d.push(1);
    d.push(2);
    d.push(3);
    cout << d.isfull() << endl;
    c.pop(temp);
    cout << temp << endl;
    return 0;

}