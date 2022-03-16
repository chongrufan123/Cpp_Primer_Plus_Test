#include <iostream>
#include <vector>

int reduce(long ar[], int n);

int main(){
    using namespace std;
    long arr[10] = {12, 12, 5, 6, 11, 5, 6, 77, 11, 12};
    int i = reduce(arr, sizeof(arr) / sizeof(long));
    cout << i << endl;
    for(int j = 0; j < i; ++j){
        cout << arr[j] << endl;
    }

    return 0;
}

int reduce(long ar[], int n){
    long temp;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n - 1 - i; ++j){
            if( *(ar + j) > *(ar + j + 1)){
                temp = *(ar + j);
                *(ar + j) = *(ar + j + 1);
                *(ar + j + 1) = temp;
            }
        }
    }

    for(int i = 0; i < n - 1; ++i){
        if(*(ar + i) == *(ar + i + 1)){
            for(int j = i + 1; j < n - 1; ++j){
                *(ar + j) = *(ar + j + 1);
            }
            i--;
            n--;
        }
    }
    return n;
}