#include <string>
#include <iostream>

int main(){
    using namespace std;
    string word;
    int length;
    cout << "Enter word you want to juage(\"quit\" to quit): ";
    getline(cin, word);
    int i;
    while (word != "quit")
    {
        length = word.size() / 2;
        for(i = 0; i < length; ++i){
            if(*(word.begin() + i) != *(word.end() - 1 - i)){
                break;
            }
        }
        if(i >= length){
            cout << "it is palindrome." << endl;
        }
        else{
            cout << "it is not palindrome." << endl;
        }
        cout << "Enter word again(\"quit\" to quit): ";
        getline(cin, word); 
    }
    cout << "Bye!" << endl;

    return 0;

}