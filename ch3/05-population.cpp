#include <iostream>

int main(){
    using namespace std;
    long long world_population, chinese_population;

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the world's population: ";
    cin >> chinese_population;
    cout << "The population of the Chinese is " <<double(chinese_population) /double(world_population) *100.0<< "\% of the world population";

    return 0;
}