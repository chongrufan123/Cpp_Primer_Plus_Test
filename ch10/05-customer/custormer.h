#ifndef CUSTORMER_H_
#define CUSTORMER_H_

struct custormer{
    char fullname[35];
    double payment;
};

typedef custormer Item;

class Stack{

private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
    double payment;
    
public:
    Stack();
    bool isempty() const;
    bool isfull() const;

    bool push(const Item & item);

    bool pop(Item & item);
    double showpayment(){ return payment; };

};




#endif