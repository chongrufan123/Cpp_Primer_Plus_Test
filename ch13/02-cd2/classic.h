#pragma once

class Cd{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;

public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;    // reports all CD data

    Cd & operator=(const Cd & d);

};

class Classic : public Cd{
private:
    char * production;
public:
    Classic(char * s1, char * s2, char * s3, int n, double x);
    Classic(const Classic & c);
    Classic();
    virtual ~Classic();
    virtual void Report() const;

    Classic & operator=(const Classic & c);
};