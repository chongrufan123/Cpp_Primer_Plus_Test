#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>


namespace VECTOR{

    class Vector{
    public:
        enum Mode {RECT, PLO};  // RECT for x and y; PLO for Polar modes
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;

        void setx();
        void sety();
        void setmag();
        void setang();

    public:
        Vector();
        Vector(double n1, double n2, Mode mode = RECT);
        void reset(double n1, double n2, Mode mode = RECT);
        ~Vector();

        double xval() const {return x; };
        double yval() const {return y; };
        double magval() const {return mag; };
        double angval() const {return ang; };
        // int modeval() const {return mode; };

        void polar_mode();
        void rect_mode();

        // operator
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        // friend
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & cout, const Vector & a);
    };
}

#endif