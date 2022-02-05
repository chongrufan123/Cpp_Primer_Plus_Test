#include "plorg.h"


Plorg::Plorg(char const * m_name, int m_ci){
    strcpy(this->name, m_name);
    this->CI = m_ci;
}
const void Plorg::resetci(int m_ci){
    this->CI = m_ci;
}
const void Plorg::show() const{
    cout << "name is " << this->name << endl;
    cout << "ci is " << this->CI << endl;
}