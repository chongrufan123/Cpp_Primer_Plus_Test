#include "golf.h"
#include <iostream>
#include <cstring>

int main(){
    golf g[10];
    std::cout << "Enter noting to end"<< std::endl;
    int i;
    for(i = 0; i < 10; i++){
        setgolf(g[i]);
        if(!strcmp( g[i].fullname, ""))
            break;
    }
    int j = 0;
    for( ; j <= i; j++){
        showgolf(g[j]);
    }
    return 0;
}