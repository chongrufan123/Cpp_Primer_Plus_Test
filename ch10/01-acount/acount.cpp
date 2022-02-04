#include "acount.h"

using namespace std;

Acount::Acount(string const m_name, char const m_number[Maxsize], float m_deposit = 0){
    this->name = m_name;
    strcpy(this->number, m_number);
    this->deposit = m_deposit;
}
void Acount::show(){
    cout << "name is " << this->name << endl;
    cout << "number is " << this->number << endl;
    cout << "the deposit is " << this->deposit << endl;
}
void Acount::save(float money){
    this->deposit += money;
}
void Acount::load(float money){
    this->deposit -= money;
}