#include <iostream>
using namespace std;
#include <cstring>
struct stringy{
    char * str;
    int ct;
};

void set(stringy &, char[]);
void show(stringy const & beany, int times = 1);
void show(char* const testing, int times = 1);
int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);

    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & beany, char * testing){
    int i = 0;
    while(testing[i] != '\0'){
        i++;
    }
    beany.ct = i;
    strcpy(beany.str, testing);
}

void show(stringy const & beany, int times){
    for(int i = 0; i< times; i++){
        cout << "str is " << beany.str << endl;
        cout << "bt is " << beany.ct << endl;
    }
}

void show(char* const testing, int times){
    for(int i = 0; i < times; i++){
        cout << "testing is " << testing << endl;
    }
}