#include "emp.h"
#include <iostream>

using namespace std;


// abstr_emp
abstr_emp::abstr_emp(){
    fname = "none";
    lname = "none";
    job = "none";
}
abstr_emp::abstr_emp(const string &fn, const string & ln, const string & j){
    fname = fn;
    lname = ln;
    job = j;
}

abstr_emp::abstr_emp(const abstr_emp & e){
    fname = e.fname;
    lname = e.lname;
    job = e.job;
}

void abstr_emp::ShowAll() const{
    cout << "name: " << fname << " " << lname << endl;
    cout << "job: " << job << endl;
}
void abstr_emp::SetAll(){
    cout << "enter first name: ";
    cin >> fname;
    cout << "enter last name: ";
    cin >> lname;
    cout << "enter job: ";
    cin >> job;
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e){
    os << e.fname << " " << e.lname;
    return os;
}

// employee
employee::employee() : abstr_emp() {}
employee::employee(const string & fn, const string & ln, const string & j) : abstr_emp(fn, ln, j) {}
void employee::ShowAll() const{
    abstr_emp::ShowAll();
}
void employee::SetAll(){
    abstr_emp::SetAll();
}

// manager
manager::manager() : abstr_emp(){
    inchargeof = 0;
}
manager::manager(const string & fn, const string & ln, const string & j, int ico) : abstr_emp(fn, ln, j){
    inchargeof = ico;
}
manager::manager(const abstr_emp & e, int ico) : abstr_emp(e){
    inchargeof = ico;
}

manager::manager(const manager & m) : abstr_emp(m){
    this->inchargeof = m.inchargeof;
}
void manager::ShowAll() const{
    abstr_emp::ShowAll();
    cout << "in charge of " << inchargeof << endl;
}
void manager::SetAll(){
    abstr_emp::SetAll();
    cout << "Enter in charge of :";
    cin >> inchargeof;
}

// fink
fink::fink() : abstr_emp(){
    reportsto = "none";
}
fink::fink(const string & fn, const string & ln, const string & j, const string & rpo) : abstr_emp(fn, ln, j){
    reportsto = rpo;
}
fink::fink(const fink & e) : abstr_emp(e){
    reportsto = e.reportsto;
}

fink::fink(const abstr_emp & e, const string & rpo) : abstr_emp(e){
    reportsto = rpo;
}

void fink::ShowAll() const{
    abstr_emp::ShowAll();
    cout << "reports to " << reportsto << endl;
}
void fink::SetAll(){
    cout << "enter reports to: ";
    cin >> reportsto;
}


highfink::highfink() : manager(), abstr_emp(){}
highfink::highfink(const string & fn, const string & ln, const string & j, const string & rpo, int ico) : manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}
highfink::highfink(const abstr_emp & e, const string & rpo, int ico) : manager(e, ico), fink(e, rpo) {} 
highfink::highfink(const fink & k, int ico) : fink(k){
    InChargeOf() = ico;
}
highfink::highfink(const manager & m, const string & rpo) : manager(m){
    ReportsTo() = rpo;
}
highfink::highfink(const highfink & h) : fink(h), manager(h) {}
void highfink::ShowAll() const{
    fink::ShowAll();
    cout << "in charge of: " << InChargeOf() << endl;
}
void highfink::SetAll(){
    fink::SetAll();
    cout << "enter in charge of ";
    cin >> InChargeOf();
}
