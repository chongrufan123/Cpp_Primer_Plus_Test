#include "stack.h"
#include <cstring>


Stack::Stack(int n){
    size = n;
    top = 0;
    pitems = new Item[n];
}
Stack::Stack(const Stack & st){
    size = st.size;
    top = st.top;
    pitems = new Item[size];
    for(int i = 0; i < top; ++i)
        pitems[i] = st.pitems[i];
}
Stack::~Stack(){
    delete [] pitems;
}
bool Stack::isempty() const{
    if(top == 0){
        return true;
    }
    else{
        return false;
    }
}
bool Stack::isfull() const{
    if(top == size){
        return true;
    }
    else{
        return false;
    }
}

bool Stack::push(const Item & item){
    if(isfull()){
        return false;
    }
    pitems[top++] = item;
    return true;
}
bool Stack::pop(Item & item){
    if(isempty()){
        return false;
    }
    item = pitems[--top];
    return true;
}
Stack & Stack::operator=(const Stack & st){
    if(this == &st){
        return *this;
    }
    delete [] pitems;
    size = st.size;
    top = st.top;
    pitems = new Item[size];
    for(int i = 0; i < top; ++i)
        pitems[i] = st.pitems[i];
    return *this;
}