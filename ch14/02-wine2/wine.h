#pragma once
#include <valarray>
#include <string>
#include "pair.hpp"

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine : private PairArray, private std::string{
private:
    int year;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    Wine() {};
    void GetBottles();
    void Show() const;
    const std::string & Label() const { return (const std::string &)(*this); };
    int sum() const {return PairArray::second().sum(); };
};
