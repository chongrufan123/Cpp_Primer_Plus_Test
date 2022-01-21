#include <iostream>
#include <cstring>

using namespace std;
struct chaff{
    char dross[20];
    int slag;
};

int main(){
    chaff * ch = new chaff[2];
    strcpy(ch->dross, "aimafan");
    ch->slag = 13;
    ch++;
    strcpy(ch->dross, "Who are you");
    ch->slag = 26;
    ch--;
    for(int i = 0; i < 2; i++){
        cout << "No." << i+1 << ":" << endl;
        cout << "dross is " << (ch+i)->dross << endl;
        cout << "slag is " << (ch+i)->slag << endl;
    }
    return 0;
}