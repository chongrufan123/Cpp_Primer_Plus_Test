#include "stonewt.h"
// 11.5
Stonewt::Stonewt(double lbs, Mode m){
    stone = int(lbs) / Lbs_per_stn;
    pds_left = lbs - stone * Lbs_per_stn ;
    pounds = lbs;
    mode = m;
}
Stonewt::Stonewt(int stn, double lbs, Mode m){
    stone = stn + int(lbs) / Lbs_per_stn;
    pds_left = lbs - int(lbs) + int(lbs) % Lbs_per_stn;
    pounds = lbs + stn * Lbs_per_stn;
    mode = m;
}
Stonewt::Stonewt(){
    stone = pds_left = pounds = 0;
    mode = STN;
}
Stonewt::~Stonewt(){

}

// friend
std::ostream & operator<<(std::ostream & out, Stonewt const & s){
    if(s.mode == Stonewt::STN){
        out << "stone: " << s.stone << " pounds_left: " << s.pds_left;
    }
    else if(s.mode == Stonewt::PDS){
        out << "pounds: " << s.pounds;
    }
    else{
        throw "invilid mode!";
    }
    return out;
}
Stonewt operator+(Stonewt const & a, Stonewt const & b){
    return Stonewt(a.stone + b.stone, a.pds_left + b.pds_left);
}
Stonewt operator-(Stonewt const & a, Stonewt const & b){
    if(a.stone < b.stone || (a.stone == b.stone && a.pds_left <= b.pds_left)){
        return Stonewt();
    }
    if(a.pds_left >= b.pds_left){
        return Stonewt(a.stone - b.stone, a.pds_left - b.pds_left);
    }
    else{
        return Stonewt(a.stone - b.stone - 1, a.pds_left + Stonewt::Lbs_per_stn - b.pds_left);
    }
}
Stonewt operator*(Stonewt const & a, double n){
    return Stonewt(a.stone * n, a.pds_left * n, a.mode);
}

// 11.6
bool operator==(Stonewt const & a, Stonewt const & b){
    if(a.pounds == b.pounds){
        return true;
    }
    else{
        return false;
    }
}
bool operator!=(Stonewt const & a, Stonewt const & b){
    if(a.pounds == b.pounds){
        return false;
    }
    else{
        return true;
    }
}
bool operator<(Stonewt const & a, Stonewt const & b){
    if(a.pounds < b.pounds){
        return true;
    }
    else{
        return false;
    }
}
bool operator>(Stonewt const & a, Stonewt const & b){
    if(a.pounds > b.pounds){
        return true;
    }
    else{
        return false;
    }
}
bool operator<=(Stonewt const & a, Stonewt const & b){
    if(a.pounds <= b.pounds){
        return true;
    }
    else{
        return false;
    }
}
bool operator>=(Stonewt const & a, Stonewt const & b){
    if(a.pounds >= b.pounds){
        return true;
    }
    else{
        return false;
    }
}