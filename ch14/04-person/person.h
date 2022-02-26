#pragma once

class Person{
private:
    char * lastname;
    char * firstname;
public:
    Person(char * ln, char * fn);
    Person();
    virtual ~Person();
    virtual void Show() const;
    virtual void Set();
};

class Gunsilinger : virtual public Person{
private:
    int nick;
public:
    Gunsilinger(char * ln, char * fn, int nk);
    Gunsilinger();
    double Draw();
    virtual void Show() const;
    virtual void Set();
};

class PokerPlayer : virtual public Person{
public:
    struct Card
    {
        enum pok_color{HEART, SPADES, DIAMONDS, CLUBS} color;
        int num;
    };

    PokerPlayer();
    Card Draw();
    virtual void Show() const;

};

class BadDude : public Gunsilinger, public PokerPlayer{
public:
    BadDude() : Person(), Gunsilinger(), PokerPlayer(){}
    void Show() const;
    void Draw() {}
    double Gdraw();
    PokerPlayer::Card Cdraw();
};