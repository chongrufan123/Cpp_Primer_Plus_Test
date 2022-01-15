#include <iostream>

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void box_one(box);
void box_two(box*);
int main(){
    box one = {"aima FAN", 20, 40.5, 35.2, 0.0 };
    box_one(one);
    box_two(&one);
    box_one(one);
    return 0;
}

void box_one(box one){
    using namespace std;
    cout << "maker: " << one.maker << endl;
    cout << "height: " << one.height << endl;
    cout << "width: " << one.width << endl;
    cout << "length: " << one.length << endl;
    cout << "volume: " << one.volume << endl;
}

void box_two(box *one){
    one -> volume = one -> height * one -> width * one -> length;
}