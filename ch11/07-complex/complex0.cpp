#include "complex0.h"

Complex::Complex(double a, double i){
    real = a;
    imaginary = i;
}
Complex::Complex(){
    real = imaginary = 0;
}
Complex::~Complex(){

}

Complex const Complex::operator+(Complex const & b){
    return Complex(real + b.real, imaginary + b.imaginary);
}
Complex const Complex::operator-(Complex const & b){
    return Complex(real - b.real, imaginary - b.imaginary);
}
Complex const Complex::operator*(Complex const & b){
    return Complex(real * b.real - imaginary * b.imaginary, real * b.imaginary + imaginary * b.real);
}
Complex const Complex::operator*(double n){
    return Complex(real * n, imaginary * n);
}
Complex const Complex::operator~(){
    return Complex(real, imaginary * (-1));
}

// friend
// friend Complex const operator~(Complex const & a);
std::ostream & operator<<(std::ostream & out, Complex const & a){
    out << "(" << a.real << ", " << a.imaginary << "i)";
    return out;
}
std::istream & operator>>(std::istream & in, Complex & a){
    std::cout << "real: ";
    in >> a.real;
    std::cout << "imaginary: ";
    in >> a.imaginary;
    return in;
}