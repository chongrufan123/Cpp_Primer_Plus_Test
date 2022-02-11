#ifndef TIME_H_
#define TIME_H_

#include <iostream>

class Time{
private:
    int hours;
    int minites;
public:
    Time();
    Time(int h, int m = 0);

    int minval() {return minites;};
    int hourval() {return hours;};

    void AddMin(int m);
    void AddHour(int h);
    void reset(int h, int m = 0);

// friend
    friend Time operator+(Time const & a, Time const & b);
    friend Time operator-(Time const & a, Time const & b);
    friend Time operator*(Time const & a, double n);
    friend Time operator*(double n, Time const & a){return a * n; };
    friend std::ostream & operator<<(std::ostream & cout, Time const & a);

};

#endif