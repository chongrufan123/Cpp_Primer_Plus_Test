#pragma once
#include <valarray>
#include <string>
#include "pair.hpp"

class Wine{
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string name;
    PairArray year_num;
    int year;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    void Show() const;
    std::string Label() { return name; };
    int sum() const {return year_num.second().sum(); };
};
