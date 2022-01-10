#include <iostream>

const int Day_to_Hour = 24;
const int Hour_to_Minute = 60;
const int Minute_to_Second = 60;

int main(){
    using namespace std;
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    int days = seconds/Minute_to_Second/Hour_to_Minute/Day_to_Hour;
    int hours = (seconds - days*Minute_to_Second*Hour_to_Minute*Day_to_Hour)/Minute_to_Second/Hour_to_Minute;
    int minutes = (seconds - days*Minute_to_Second*Hour_to_Minute*Day_to_Hour - hours*Minute_to_Second*Hour_to_Minute)/Minute_to_Second;
    int second = seconds -days*Minute_to_Second*Hour_to_Minute*Day_to_Hour - hours*Minute_to_Second*Hour_to_Minute - minutes*Minute_to_Second;
    cout << seconds << " seconds = " << days <<" days, " << hours << " hours, " << minutes << " minutes, " << second << " seconds" << endl;
                    
    return 0;
}