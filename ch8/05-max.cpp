#include <iostream>
using namespace std;

template <typename T>
inline T max5(T a, T b, T c, T d, T e){
    T max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    if(d > max)
        max = d;
    if(e > max)
        max = e;
    return max;
    }
int main(){
    int a[5];
    cout << "Enter int: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    int max_int = max5<int>(a[0], a[1], a[2], a[3], a[4]);
    cout << "max_int: " << max_int << endl;

    double b[5];
    cout << "Enter double: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> b[i];
    }
    double max_double = max5<double>(b[0], b[1], b[2], b[3], b[4]);
    cout << "max_double: " << max_double <<endl;
}