#include <iostream>
#include <string>
#include <fstream>

struct donation
{
    std::string name;
    double money;
};


int main(){
    using namespace std;
    int count;
    ifstream infile;
    infile.open("patron.txt");
    if(!infile.is_open()){
        cout << "Could not open the file" << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    infile >> count;
    infile.get();
    donation *person = new donation [count];
    for(int i = 0; i < count; i++){
        getline(infile, person[i].name);
        infile >> person[i].money;
        infile.get();
    }
    int i = 0;
    cout << "Grand Patrons: " << endl;
    while( i < count ){
        if(person[i].money > 10000){
            cout << "name: " << person[i].name << "\tmoney: " << person[i].money << endl;
        }
        i++;
    }
    i = 0;
    cout << "Patrons: " << endl;
    while( i < count ){
        if(person[i].money <= 10000){
            cout << "name: " << person[i].name << "\tmoney: " << person[i].money << endl;
        }
        i++;
    }
    delete [] person;
    return 0;
}