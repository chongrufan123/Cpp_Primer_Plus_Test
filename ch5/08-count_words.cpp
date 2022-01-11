#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    cout << "Enter words (to stop, type the word done): " << endl;
    int i;
    char word[50];
    for(i = 0; strcmp(word, "done") ; i++){
        cin >> word;
    }
    cout << "You entered a total of " << i - 1 << " words";
}