#include <iostream>

int factorial(int);
int main(){
    using namespace std;
    int n;
    long long result;
    cout << "Enter a int(q to quit): " << endl;
    while(cin >> n){
        result = factorial(n);
        cout << "The factorial is " << result << endl;
    }
    return 0;
    
}

int factorial(int n){
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}