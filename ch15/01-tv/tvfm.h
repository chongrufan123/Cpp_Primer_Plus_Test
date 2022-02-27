#pragma once

#include <iostream>

class Tv;

class Remote{
friend class Tv;
public:
    enum State{Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};
    enum {Normal, Interactive};
private:
    int mode;
    int gmode;
public:
    Remote(int m = TV) : mode(m) {}
    bool volup(Tv & t);
    bool voldown(Tv & t);
    void onoff(Tv & t);
    void chanup(Tv & t);
    void chandown(Tv & t);
    void set_mode(Tv & t);
    void set_input(Tv & t);
    void set_chan(Tv & t, int c);
    void set_gmode();
    void show_gmode() const;
};

class Tv{
friend class Remote;
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    friend void Remote::set_chan(Tv & t, int c);
    void buzz(Remote & r);
    enum State{Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};   
    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On) ? Off : On;}
    bool ison() const {return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() {mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV) ? DVD : TV;} 
    void settings() const;
    void set_gmode(Remote & r) const;
};

inline bool Remote::volup(Tv & t) { return t.volup();}
inline bool Remote::voldown(Tv & t) { return t.voldown(); }
inline void Remote::onoff(Tv & t) {t.onoff(); }
inline void Remote::chanup(Tv & t) {t.chanup();}
inline void Remote::chandown(Tv & t) {t.chandown();}
inline void Remote::set_mode(Tv & t) {t.set_mode();}
inline void Remote::set_input(Tv & t) {t.set_input();}
inline void Remote::set_chan(Tv & t, int c) {t.channel = c;}

inline void Remote::show_gmode() const
{ 
    std::cout << (gmode == Normal ? "Normal" : "Interactive") << std::endl;
}

inline void Remote::set_gmode()
{
    gmode = (gmode == Normal) ? Interactive : Normal; 
}