#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

// 11.5
class Stonewt{
public:
    enum Mode {STN, PDS};  // stone, pounds_left and pounds
private:
    enum {Lbs_per_stn = 14};    // pounds per stone
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
public:
    Stonewt(double lbs, Mode m = STN);
    Stonewt(int stn, double lbs, Mode m = STN);
    Stonewt();
    ~Stonewt();

    // friend
    friend std::ostream & operator<<(std::ostream & out, Stonewt const & s);
    friend Stonewt operator+(Stonewt const & a, Stonewt const & b);
    friend Stonewt operator-(Stonewt const & a, Stonewt const & b);
    friend Stonewt operator*(Stonewt const & a, double n);
    friend Stonewt operator*(double n, Stonewt const & a) {return a * n; };

    // 11.6    
    // 6个关系运算符  == != > < >= <=
    friend bool operator==(Stonewt const & a, Stonewt const & b);
    friend bool operator!=(Stonewt const & a, Stonewt const & b);
    friend bool operator<(Stonewt const & a, Stonewt const & b);
    friend bool operator>(Stonewt const & a, Stonewt const & b);
    friend bool operator<=(Stonewt const & a, Stonewt const & b);
    friend bool operator>=(Stonewt const & a, Stonewt const & b);
};


#endif