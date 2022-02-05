#include "custormer.h"

Stack::Stack(){
    this->top = -1;
    payment = 0;
}
bool Stack::isempty() const{
    if(top == -1)
        return true;
    else
        return false;
}
bool Stack::isfull() const{
    if(this->top < MAX - 1)
        return true;
    else
        return false;
}

bool Stack::push(const Item & item){
    if(this->top < MAX - 1){
        this->items[++top] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item){
    if(this->top != -1){
        item = this->items[top--];
        this->payment += item.payment;
        return true;
    }
    else
        return false;
}