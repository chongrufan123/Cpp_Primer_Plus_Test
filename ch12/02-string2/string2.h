#ifndef STRING2_H_
#define STRING2_H_

#include <iostream>

class String{
private:
    char * str;
    int len;
    static int num_string;
    static const int CINLIM = 80;

public:
    String();
    String(const char * c);
    String(const String & st);
    ~String();
    int lenth() {return len;} ;
    String & operator=(const String & st);
    String & operator=(const char * c);
    char & operator[](int i);
    const char & operator[](int i) const;

    String operator+(const String & st);
    String operator+(const char * c);
    void stringlow();
    void stringup();
    int has(const char c);

    friend bool operator<(const String & st1, const String & st2);
    friend bool operator>(const String & st1, const String & st2);
    friend bool operator==(const String & st1, const String & st2);
    friend std::ostream & operator<<(std::ostream & out, const String & st);
    friend std::istream & operator>>(std::istream & in, String & st);
    friend String operator+(const char * c, const String & st);

    static int HowMany();
};


#endif
