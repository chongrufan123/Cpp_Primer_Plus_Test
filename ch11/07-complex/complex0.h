#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class Complex{
private:
    double real;
    double imaginary;
public:
    Complex(double a, double i);
    Complex();
    ~Complex();

    Complex const operator+(Complex const & b);
    Complex const operator-(Complex const & b);
    Complex const operator*(Complex const & b);
    Complex const operator*(double n);
    Complex const operator~();

    // friend
    // friend Complex const operator~(Complex const & a);
    friend Complex const operator*(double n, Complex a) {return a * n; };
    friend std::ostream & operator<<(std::ostream & out, Complex const & a);
    friend std::istream & operator>>(std::istream & in, Complex & a);
};



#endif