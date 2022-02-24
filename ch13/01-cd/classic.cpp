#include "classic.h"
#include <cstring>
#include <iostream>

using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x){
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d){
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd(){
    strcpy(performers, " ");
    strcpy(label, " ");
    selections = 0;
    playtime = 0;
}
void Cd::Report() const{    // reports all CD data
    cout << "Performance: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtimes: " << playtime << endl;
}
Cd & Cd::operator=(const Cd & d){
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}



Classic::Classic(char * s1, char * s2, char * s3, int n, double x){
    strcpy(production, s1);
    strcpy(performers, s2);
    strcpy(label, s3);
    selections = n;
    playtime = x;
}
Classic::Classic(){
    strcpy(production, " ");
    strcpy(performers, " ");
    strcpy(label, " ");
    selections = 0;
    playtime = 0;
}
Classic::Classic(const Classic & d){
    strcpy(production, d.production);
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime; 
}
void Classic::Report() const{
    cout << "Production: " << production << endl;
    cout << "Performance: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtimes: " << playtime << endl;
}
Classic & Classic::operator=(const Classic & d){
    strcpy(production, d.production);
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime; 
    return *this;
}