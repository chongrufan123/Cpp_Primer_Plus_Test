#include "move.h"

int main(){
    Move a(5, 10);
    Move b(20, 50);
    a.showmove();
    a.add(b);
    a.showmove();
    a.reset(5.5, 10.6);
    a.showmove();
}