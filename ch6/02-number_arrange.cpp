#include <iostream>
#include <array>

int main(){
    using namespace std;
    cout << "Enter some number: " ; 
    array <double, 10> donation;
    int i = 0;
    while(cin >> donation[i]){
        i++;
    }
    int sum = 0;
    for(int j = 0; j < i; j++){
        sum += donation[j];
    }
    sum /= i;
    int count = 0;
    cout << "arrange is " << sum << endl;
    for(int j = 0; j < i; j++){
        if(donation[j] > sum)
            count++;
    }
    cout << "There are " << count << " number > arrange";
    return 0;
}