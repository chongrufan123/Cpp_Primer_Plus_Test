#include "string2.h"
#include <cstring>
#include <cctype>

using namespace std;

int String::num_string = 0;

String::String(){
    str = new char[1];
    str[0] = '\0';
    len = 4;    // why?
    num_string++;
}
String::String(const char * c){
    len = strlen(c);
    str = new char[len + 1];
    strcpy(str, c);
    num_string++;
}
String::String(const String & st){
    len = strlen(st.str);
    str = new char[len + 1];
    strcpy(str, st.str);
    num_string++;
}
String::~String(){
    num_string--;
    delete [] str;
}
String & String::operator=(const String & st){
    if(this == &st){
        return *this;
    }
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}
String & String::operator=(const char * c){
    delete [] str;
    len = strlen(c);
    str = new char[len + 1];
    strcpy(str, c);
    return *this;
}
char & String::operator[](int i){
    return str[i];
}
const char & String::operator[](int i) const{
    return str[i];    
}

String String::operator+(const String & st){
    char * cc;
    cc = new char[len + st.len + 1];
    strcpy(cc, str);
    strcpy(cc+len, st.str);
    return String(cc);
}
String String::operator+(const char * c){
    char * cc;
    cc = new char[len + strlen(c) + 1];
    strcpy(cc, str);
    strcpy(cc+len, c);
    return String(cc);
}
String operator+(const char * c, const String & st){
    char * cc;
    cc = new char[st.len + strlen(c) + 1];
    strcpy(cc, c);
    strcpy(cc + strlen(c), st.str);
    return String(cc);
}
void String::stringlow(){
    int i = 0;
    while(i < len){
        str[i] = tolower(str[i]);
        i++;
    }
}
void String::stringup(){
    int i = 0;
    while(i < len){
        str[i] = toupper(str[i]);
        i++;
    }    
}
int String::has(const char c){
    int i = 0;
    int count = 0;
    while(i < len){
        if(str[i] == c){
            count++;
        }
        i++;
    }
    return count;
}

bool operator<(const String & st1, const String & st2){
    if(strcmp(st1.str, st2.str) < 0){
        return true;
    }
    else{
        return false;
    }
}
bool operator>(const String & st1, const String & st2){
    if(strcmp(st1.str, st2.str) > 0){
        return true;
    }
    else{
        return false;
    }
}
bool operator==(const String & st1, const String & st2){
    if(strcmp(st1.str, st2.str) == 0){
        return true;
    }
    else{
        return false;
    }
}
ostream & operator<<(ostream & out, const String & st){
    out << st.str;
    return out;
}
istream & operator>>(istream & in, String & st){
    char temp[80];
    in.get(temp, 80);
    if(in){
        st = temp;
    }
    while(in && in.get() != '\n'){
        continue;
    }
    return in;
}

int String::HowMany(){
    return num_string;
}