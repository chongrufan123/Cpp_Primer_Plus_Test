// 输入身高体重，然后计算并输出BMI
#include <iostream>
using namespace std;

const int Height_conversion = 100;

int main(){
    int cmeter;
    int meter;
    float weight;

    cout << "please input your height in meter ____\b\b\b\b";
    cin >> meter;
    cout << endl;
    cout << "please input your height in centimeter ____\b\b\b\b";
    cin >> cmeter;
    cout << "please input your weight ____\b\b\b\b";
    cin >> weight;

    float height = float(cmeter) / Height_conversion + meter;
    float bmi = weight / (height * height);

    cout << "your BMI is " << bmi << endl;

    return 0;
}