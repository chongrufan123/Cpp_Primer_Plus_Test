#include <iostream>

int main(){
    using namespace std;

    float distance, gas;
    cout << "input distance: ";
    cin >> distance;
    cout << "input gas: ";
    cin >> gas;

    float ratio = distance /100.0;
    cout << "The fuel consumption per 100 kilometers is " << gas/ratio << endl;

    return 0;
}