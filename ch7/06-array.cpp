#include <iostream>

int Fill_array(double *);
void Show_array(double *, int);
void Reverse_array(double *, int);
const int MaxSize = 20;
int main(){
    using namespace std;
    int lenth;
    double a[MaxSize];
    lenth = Fill_array(a);
    Show_array(a, lenth);
    Reverse_array(a, lenth);
    Show_array(a, lenth);
    return 0;
}

int Fill_array(double *a){
    using namespace std;
    int i = 0;
    while( cin >> a[i] ){
        i++;
    }
    return i;
}

void Show_array(double *a, int lenth){
    for(int i = 0; i < lenth; i++){
        std::cout << a[i] << "\t";
    }
    std::cout << std::endl;
}

void Reverse_array(double *a, int lenth){
    double temp;
    int i = 0;
    while(i < lenth/2){
        temp = a[lenth - 1 - i];
        a[lenth - 1 - i] = a[i];
        a[i] = temp;
        i++;
    }
}