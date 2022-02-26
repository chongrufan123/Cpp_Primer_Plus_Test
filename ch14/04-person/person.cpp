#include "person.h"
#include <cstring>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


Person::Person(char * ln, char * fn){
    lastname = new char[strlen(ln) + 1];
    strcpy(lastname, ln);
    firstname = new char[strlen(fn) + 1];
    strcpy(firstname, fn);
}
Person::Person(){
    lastname = new char[1];
    firstname = new char[1];
    lastname = nullptr;
    firstname = nullptr;
}
Person::~Person (){
    delete [] firstname;
    delete [] lastname;
}
void Person::Show() const{
    cout << "name: " << firstname << " " << lastname << endl;
}

Gunsilinger::Gunsilinger(char * ln, char * fn, int nk) : Person(ln, fn), nick(nk){
    srand(time(0));
}

Gunsilinger::Gunsilinger() : Person(), nick(0){
    srand(time(0));
}

double Gunsilinger::Draw(){
    return (double(rand()) / RAND_MAX + rand() % 20);
}
void Gunsilinger::Show() const{
    Person::Show();
    cout << "nick numbers: " << nick << endl;
}

PokerPlayer::PokerPlayer() : Person(){
    srand(time(0));
}

PokerPlayer::Card PokerPlayer::Draw(){
    int num;
    int cr= rand() %  4;
    num = rand() % 13 + 1;
    return PokerPlayer::Card{PokerPlayer::Card::pok_color(cr), num};
}

double BadDude::Gdraw(){
    return Gunsilinger::Draw();
}
PokerPlayer::Card BadDude::Cdraw(){
    return PokerPlayer::Draw();
}


void PokerPlayer::Show() const{
    Person::Show();
}

void BadDude::Show() const{
    Gunsilinger::Show();
}

void Person::Set(){
    char lname[20];
    char fname[20];
    cout << "first name is ";
    cin.getline(fname, 20);
    cout << "test1";
    cout << "last name is ";
    cin.getline(lname, 20);
    delete [] lastname;
    delete [] firstname;
    lastname = new char[strlen(lname) + 1];
    strcpy(lastname, lname);
    firstname = new char[strlen(fname) + 1];
    strcpy(firstname, fname);
}

void Gunsilinger::Set(){
    Person::Set();
    cout << "nick is ";
    cin >> this->nick;
}