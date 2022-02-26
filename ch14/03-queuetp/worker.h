#pragma once 
#include <string>

using std::string;
class Worker{
private:
    string name;
    long id;
protected:
    // void Data() const;
    // void Get();
public:
    Worker() : name("noone"), id(0L) {}
    Worker(const string &s, long n) : name(s), id(n){}
    ~Worker() {}
    void Show(); 
};