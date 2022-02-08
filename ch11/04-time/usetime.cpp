#include "time1.h"

int main(){
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(1, 108);
    Time temp;

    cout << "Aida and tosca " << endl;
    cout << aida << " and " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca = " << temp << endl;
    temp = tosca - aida;
    cout << " Tosca - Aida = " << temp << endl;
    temp = aida * 2.7;
    cout << "Aida * 2.7 = " << temp << endl;
    temp = 1.8 * tosca;
    cout << "1.8 * Tosca = " << temp << endl;

    return 0;

}