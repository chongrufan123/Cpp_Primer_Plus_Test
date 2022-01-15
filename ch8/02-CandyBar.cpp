#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
    string banch;
    double weight;
    int calorie;
};

void full(CandyBar &, char *banch = "Millennium Munch", double weight = 2.85, int calorie = 350);
void show(const CandyBar &);

int main(){
    CandyBar fan;
    full(fan, "Fan Chongru", 5.65);
    show(fan);
    return 0;
}

void full(CandyBar & candyname, char *banch, double weight, int calorie){
    candyname.banch = banch;
    candyname.weight = weight;
    candyname.calorie = calorie;
}

void show(const CandyBar & candyname){
    cout << "banch is " << candyname.banch << endl;
    cout << "weight is " << candyname.weight << endl;
    cout << "calorie is " << candyname.calorie << endl;
}