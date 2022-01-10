// 输入身高，单位是厘米，之后转换为米和厘米
#include <iostream>
using namespace std;

int main(){
    int height;
    const int Conversion = 100;
    cout << "please input your height" << endl;
    cout << "your height is(please dont input unit) ________\b\b\b\b\b\b\b\b";
    cin >> height;

    int cm = height % Conversion;
    int m = height / Conversion;
    cout << "your input your height is " << m << "m then " << cm << "cm" << endl;

    return 0;
}