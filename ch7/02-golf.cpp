#include <iostream>

int input_score( int []);
void output_score( int [], int);
void arrange_score( int [], int);

int main(){
    using namespace std;
    int score[10];
    int lengh;
    lengh = input_score(score);
    output_score(score, lengh);
    arrange_score(score, lengh);
    return 0;
}

int input_score(int score[]){
    using namespace std;
    int i = 0;
    while(cin >> score[i]){
        i++;
    }
    return i;
}

void output_score( int score[], int i){
    using namespace std;
    for (int j = 0; j < i; j++){
        cout << score[j] << "\t";
    }
    cout << endl;
}

void arrange_score( int score[], int i){
    float sum = 0;
    for (int j = 0; j < i; j++){
        sum += score[j];
    }
    sum /= i;
    std::cout << "arrange is " << sum;
}