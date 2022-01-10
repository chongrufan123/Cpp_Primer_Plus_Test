// 输入度分秒的维度，输出度
#include <iostream>

const int Degree_to_Minute = 60;
const int Minute_to_Second = 60;

int main(){
    using namespace std;

    int degree, minute, second;
    cout << "Enter a latitude in degree, minutes, and second" << endl;
    cout << "First, enter the degree: ";
    cin >> degree;
    cout << "Second, enter the minute: ";
    cin >> minute;
    cout << "Finally, enter the second: ";
    cin >> second;

    float latitude = float(degree) + float(minute)/Degree_to_Minute + float(second)/Degree_to_Minute / Minute_to_Second;

    cout << "The latitude is " << latitude << endl;

    return 0;
}