#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    using namespace std;
    char word;
    int count = 0;
    ifstream inFile;
    inFile.open("07-juage_yuan.cpp");
    if(!inFile.is_open()){
        cout << "Could not open the file" << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    while(!inFile.eof()){
        inFile >> word;
        count++;
        cout << word;
    }
    cout << count;

    inFile.close();
    return 0;

}