#include <iostream>

using namespace std;

int main(){
    double money_of_Daphne_first = 100, money_of_Cleo = 100;
    double money_of_Daphne = 100;
    int year = 1;
    for( ; money_of_Cleo <= money_of_Daphne ; year++){
        money_of_Daphne += (0.1 * money_of_Daphne_first);
        money_of_Cleo = (money_of_Cleo * 0.05) + money_of_Cleo;
    }
    cout << year;

    return 0;
}