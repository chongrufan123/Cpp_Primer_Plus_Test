#include "acount.h"


int main(){
    Acount fan("Fan Chongru", "867402063", 53489.20);
    Acount huo("Huo meiling", "478239127", 2938108.41);


    fan.show();
    huo.show();
    fan.save(10000);
    huo.load(20000);
    fan.show();
    huo.show();
    return 0;

}