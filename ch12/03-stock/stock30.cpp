#include "stock30.h"
#include <iostream>
#include <cstring>

using namespace std;

Stock::Stock(){
    cout << "Default constructor called\n";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
    company = new char[1];
    company[0] = '\0';
}
Stock::Stock(const char * co, long n, double pr){
    company = new char[strlen(co) + 1];
    strcpy(company, co);
    shares = n;
    share_val = pr;
    set_tot();
}
Stock::~Stock(){
    delete [] company;
}
void Stock::buy(long num, double price){
    shares += num;
    share_val += price;
    set_tot();
}
void Stock::sell(long num, double price){
    shares -= num;
    share_val -= price;
    set_tot();
}
void Stock::update(double price){
    share_val = price;
    set_tot();
}

std::ostream & operator<<(std::ostream & out, const Stock & st){
    ios_base::fmtflags orig = out.setf(ios_base::fixed, ios_base::floatfield);
    streamsize prec = out.precision(3);

    out << "Company: " << st.company << "  Shares: " << st.shares << endl;
    out.precision(2);
    out << " Total Worth: $" << st.total_val;

    out.setf(orig, ios_base::floatfield);
    out.precision(prec);
    return out;
}

Stock & Stock::operator=(const Stock & st){
    if(this == &st){
        return *this;
    }
    delete [] company;
    company = new char[strlen(st.company) + 1];
    strcpy(company, st.company);
    share_val = st.share_val;
    shares = st.shares;
    set_tot();
    return *this;
}

