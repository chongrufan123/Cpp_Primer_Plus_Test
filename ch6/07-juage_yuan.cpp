#include <iostream>
#include <cctype>
#include <cstring>

int main(){
    using namespace std;
    char words[10];
    int vowel =0,  consonant = 0, other = 0;
    cout << "Enter words (q to quit): " << endl;
    cin >> words;
    while(strcmp(words, "q")){
        if(isalpha(words[0])){
            if(words[0] == 'a' || words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u')
                vowel++;
            else
                consonant++;
        }
        else
            other++;
        cin >> words;
    }
    cout << vowel << " words beginning with vowels\n";
    cout << consonant << " words beginning with consonants\n";
    cout << other << " others";

    return 0;
}