#pragma once 
#include <valarray>
#include <iostream>

using std::valarray;
template<typename T1>
class QueueTp{
private:
    enum {Q_SIZE = 10};
    struct Node
    {
        T1 item;
        Node * next;
    };
    Node * rear;
    Node * front;
    int item;
    const int qsize;
public:
    QueueTp(int n = Q_SIZE);
    ~QueueTp();
    bool isempty() const { return item == 0; };
    void enqueue(const T1 & t);
    bool isfull() {return item == qsize; };
    void dequeue(T1 & t);
    int queuecount() const {return item;}
};

template <typename T1>
QueueTp<T1>::QueueTp(int n) : qsize(n), item(0){
    rear = new Node;
    front = rear;
    rear->next = nullptr;
}


template <typename T1>
void QueueTp<T1>::enqueue(const T1 & t){
    if(this->isfull()){
        std::cout << "queue is full! " << std::endl;
        return;
    }
    rear->item = t;
    rear->next = new Node;
    rear = rear->next;
    rear->next = nullptr;
    item ++;
}

template <typename T1>
void QueueTp<T1>::dequeue(T1 & t){
    if(this->isempty()){
        std::cout << "queue is empty! " << std::endl;
        return;
    }
    t = front->item;
    Node *temp;
    temp = front;
    front = front->next;
    delete temp;
    item --;
}

template <typename T1>
QueueTp<T1>::~QueueTp(){
    while( !isempty() ){
        Node * temp;
        temp = front;
        delete temp;
        front = front->next;
        item --;
    }
}