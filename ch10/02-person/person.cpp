#include "person.h"


Person::Person(const string & ln, const char * fn){
    this->lname = ln;
    strcpy(this->fname, fn);
}
void Person::Show() const{
    cout << "name is " << this->fname << " " << this->lname << endl;
}
void Person::FormalShow() const{
    cout << "name is " << this->lname << " " << this->fname << endl;
}