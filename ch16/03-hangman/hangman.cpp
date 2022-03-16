#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

const int NUM = 26;

using namespace std;

bool reload(vector<string> &lists);

int main(){
    vector<string> wordlists;
    if(!reload(wordlists)){
        return 0;
    }
    srand(time(0));
    char play;
    char latter;
    cout << "Will you play a word game? <y/n> ";
    while (cin >> play && (play != 'n' && play != 'N'))
    {
        string target = wordlists[rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guss my seret word. It has " << length 
            << " letters, and you guess\n" 
            << "one letter at a time. You get " << guesses
            << " wrong guesses.\n";

        cout << "your words is " << attempt << endl;
        while(guesses > 0 && attempt != target){
            cout << "Guess a letter: ";
            cin >> latter;
            if(badchars.find(latter) != string::npos || attempt.find(latter) != string::npos){
                cout << "You already guessed that. Try again.\n";
                continue;
            }
            int loc = target.find(latter);
            if(loc == string::npos){
                cout << "Oh, bad guess!" << endl;
                -- guesses;
                badchars += latter;
            }
            else{
                cout << "Good guess!" << endl;
                attempt[loc] = latter;
                loc = target.find(latter, loc + 1);
                while( loc != string::npos ){
                    attempt[loc] = latter;
                    loc = target.find(latter, loc + 1);
                }
            }
            cout << "your word: " << attempt << endl;
            if(attempt != target){
                if(badchars.length() > 0){
                    cout << "Bad choice: " << badchars << endl; 
                    cout << guesses << " bad guesses left." << endl;
                }
            }
        }
        if(guesses > 0)
            cout << "That's right!" << endl;
        else{
            cout << "Sorry, the word is " << target << endl;
        }
        cout << "Will you play another? <y/n>: ";
    }
    
    cout << "Bye!\n";
    return 0;
}

bool reload(vector<string> &lists){
    ifstream ifs;
    ifs.open("./wordlists.txt", ios::in);

    if(!ifs.is_open()){
        cout << "文件打开失败!";
        return false;
    }

    std::string temp;
    while( ifs >> temp){
        lists.push_back(temp);
        temp.erase();
    }
    return true;
}