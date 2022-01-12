#include <iostream>
#include <cctype>

int main(){
    using namespace std;
    char sentence[100];
    char juage = 0;
    cout << "Enter some words until @: ";
    for(int i=0; juage != '@'; i++){
        juage = cin.get();
        if(islower(juage))
            sentence[i] = toupper(juage);
        else if(isupper(juage))
            sentence[i] = tolower(juage);
        else if(isdigit(juage))
            i--;
        else
            sentence[i] = juage;
    }
    sentence[-1] = '\0';
    cout << sentence;

    return 0;
}