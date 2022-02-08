#include "vector.h"
#include <cmath>


using namespace std;
namespace VECTOR
{
    void Vector::setx(){
        x = mag * cos(ang);
    }
    void Vector::sety(){
        y = mag * sin(ang);
    }
    void Vector::setmag(){
        mag = sqrt( x * x + y * y );
    }
    void Vector::setang(){
        ang = atan2(y, x);
    }

    Vector::Vector(){
        x = y = 0;
        mag = ang = 0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode mode){ // n1 for x or mag; n2 for y or ang
        if(mode == RECT){
            x = n1;
            y = n2;
            setang();
            setmag();
        }
        else if(mode == PLO){
            mag = n1;
            ang = n2;
            setx();
            sety();
        }
        else{
            throw "A invaild mode!";
        }
    }

    Vector::~Vector(){
        
    }

    void Vector::reset(double n1, double n2, Mode mode){
        if(mode == RECT){
            x = n1;
            y = n2;
            setang();
            setmag();
        }
        else if(mode == PLO){
            mag = n1;
            ang = n2;
            setx();
            sety();
        }
        else{
            throw "A invaild mode!";
        }
    }

    void Vector::polar_mode(){
        mode = PLO;
    }
    void Vector::rect_mode(){
        mode = RECT;
    }

    Vector Vector::operator+(const Vector & b) const{
        return Vector(x + b.x, y + b.y);
    }
    Vector Vector::operator-(const Vector & b) const{
        return Vector(x - b.x, y - b.y);
    }
    Vector Vector::operator-() const{
        return Vector(-x, -y);
    }
    Vector Vector::operator*(double n) const{
        return Vector(n*x, n*y);
    }

    // friend
    Vector operator*(double n, const Vector & a){
        return a * n;
    }
    std::ostream & operator<<(std::ostream & out, const Vector & a){
        if(a.mode == Vector::RECT){
            out << "(x, y) = (" << a.x << ", " << a.y << ")";
        }
        else if(a.mode == Vector::PLO){
            out << "(mag, ang) = (" << a.mag << ", " << a.ang << ")";
        }
        else{
            out << a.mode << "\tinvaild!";
        }
        return out;
    }
} // namespace VECTOR
