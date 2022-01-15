#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void ftoupper(string &);
int main(){
    cout << "Enter a string (q to quit): ";
    string sentence;
    getline(cin, sentence);
    while(sentence != "q"){
        ftoupper(sentence);
        cout << sentence << endl;
        cout << "Next string (q to quit): ";
        getline(cin, sentence);
    }
    cout << "Bye";
    return 0;
}

void ftoupper(string & name){
    for(int i = 0; i < name.size(); i++){
        name[i] = toupper(name[i]);
    }
}