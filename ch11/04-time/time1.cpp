#include "time1.h"

Time::Time(){
    minites = 0;
    hours = 0;
}
Time::Time(int h, int m){
    minites = m % 60;
    hours = h + m/60;
}
void Time::AddMin(int m){
    int temp;
    temp = minites + m;
    minites += temp % 60;
    hours += temp / 60;
}
void Time::AddHour(int h){
    hours += h;
}
void Time::reset(int h, int m){
    minites = m % 60;
    hours = h + m/60;
}

Time operator+(Time const & a, Time const & b){
    int temp;
    temp = a.minites + b.minites;
    return Time(a.hours + b.hours + temp/60, temp%60);
}
Time operator-(Time const & a, Time const & b){
    int temp;
    temp = a.minites - b.minites;
    if((a.hours - b.hours) > 0 && temp < 0){
        return Time(a.hours - b.hours - 1, temp + 60);
    }
    else if(a.hours - b.hours < 0 && temp > 0){
        return Time(a.hours - b.hours + 1, temp - 60);
    }
    else{
        return Time(a.hours - b.hours, temp);
    }
}
Time operator*(Time const & a, double n){
    int mintemp;
    double hourtemp;
    mintemp = a.minites * n;
    hourtemp = a.hours * n;
    mintemp += (hourtemp - int(hourtemp)) * 60;
    return Time(int(hourtemp) + mintemp/60, mintemp % 60);
}
std::ostream & operator<<(std::ostream & out, Time const & a){
    out << a.hours << "hours, " << a.minites << "minites. ";
    return out;
}