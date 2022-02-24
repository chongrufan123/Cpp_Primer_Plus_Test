#pragma once

class Cd{
protected:
    char performers[50];
    char label[20];
    int selections;
    double playtime;

public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd() {};
    virtual void Report() const;    // reports all CD data
    Cd & operator=(const Cd & d);
};

class Classic : public Cd{
private:
    char production[50];
public:
    Classic(char * s1, char * s2, char * s3, int n, double x);
    Classic();
    Classic(const Classic & d);
    virtual ~Classic() {};
    virtual void Report() const;
    Classic & operator=(const Classic & d);
};