#include "queue.h"
#include <cstdlib>


void Customer::set(long when){
    processtime = std::rand() % 3 + 1;
    arrive = when;
}
Queue::Queue(int qs) : qsize(qs){
    front = rear = nullptr;
    items = 0;
}
Queue::~Queue(){
    Node * temp;
    while(front != nullptr){
        temp = front;
        front = front -> next;
        delete temp;
    }
}
bool Queue::isempty() const{
    return items == 0;
}
bool Queue::isfull() const{
    return items == qsize;
}
int Queue::queuecount() const{
    return items;
}
bool Queue::enqueue(const Item &item){
    if(isfull()){
        return false;
    }
    Node * temp = new Node;
    temp->next = nullptr;
    temp->item = item;
    if(front == nullptr){
        front = temp;
    }
    else{
        rear->next = temp;
    }
    rear = temp;
    items++;
    return true;
}
bool Queue::dequeue(Item & item){
    if(isempty()){
        return false;
    }
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if(isempty()){
        rear = nullptr;
    }
    return true;
}