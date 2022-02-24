#include "classic.h"
#include <cstring>
#include <iostream>

using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x){
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(){
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}

Cd::Cd(const Cd & d){
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

void Cd::Report() const{    // reports all CD data
    cout << "Performance: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtimes: " << playtime << endl;
}

Cd::~Cd(){
    delete [] performers;
    delete [] label;
}

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s2, s3, n, x){
    production = new char[strlen(s1) + 1];
    strcpy(production, s1);
}
Classic::Classic() : Cd(){
    production = new char[1];
    production[0] = '\0';
}

void Classic::Report() const{
    cout << "Production: " << production << endl;
    Cd::Report();
}

Classic::~Classic(){
    delete [] production;
}

Cd & Cd::operator=(const Cd & d){
    if(this == &d){
        return *this;
    }
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

Classic::Classic(const Classic & d) : Cd(d){
    production = new char[strlen(d.production) + 1];
    strcpy(production, d.production);
}

Classic & Classic::operator=(const Classic & d){
    if(this == &d){
        return *this;
    }
    Cd::operator=(d);
    delete [] production;
    production = new char[strlen(d.production) + 1];
    strcpy(production, d.production);
    return *this;
}