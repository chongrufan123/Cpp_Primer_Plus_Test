#include <string>
#include <iostream>
#include <ctype.h>

bool boot(std::string word);

int main(){
    using namespace std;
    string word;
    int i;
    cout << "Enter word you want to juage(\"quit\" to quit): ";
    while(getline(cin, word) && word != "quit"){
        for(i = 0; i < word.size(); ++i){
            auto temp = word.begin() + i;
            if(isspace(*temp) || ispunct(*temp)){
                word.erase(temp);
                --i;
            }
            *temp = tolower(*temp);
        }
        if(boot(word)){
            cout << "it is palindrome." << endl;
        }
        else{
            cout << "it is not palindrome." << endl;
        }
        cout << "Enter word again(\"quit\" to quit): ";
    }
    cout << "Bye!";
    return 0;
}

bool boot(std::string word){
    std::string temp(word.rbegin(), word.rend());
    return(temp == word);
}