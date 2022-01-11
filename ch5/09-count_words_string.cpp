#include <iostream>
#include <string>

int main(){
    using namespace std;
    cout << "Enter words (to stop, type the word done): " << endl;
    int i;
    string word;
    for(i = 0; word != "done" ; i++){
        cin >> word;
    }
    cout << "You entered a total of " << i - 1 << " words";
}