#include "vector.h"
#include <iostream>
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
#include <fstream>

using namespace std;
using namespace VECTOR;
int main(){
    double dis, size;
    srand(time(0));
    Vector step(0.0, 0.0);
    Vector result(0.0, 0.0);
    step.rect_mode();
    result.rect_mode();

    int count;

    // open file
    ofstream outfile;
    outfile.open("result.txt", ios::out | ios::trunc);
    // for(int i = 0; i < 100; i++){
    //     outfile << rand()%360 << endl;
    // }
    // outfile.close();

    cout << "Enter the distance and step size (use space to slide, use q to quit) : ";
    while(cin >> dis){
        if(!(cin >> size)){
            break;
        }
        count = 0;
        outfile << "Target Distance: " << dis << ", Step Size: " << size << endl;
        while(result.magval() < dis){
            if(count % 20 == 0){
                outfile << count << ": " << result << endl;
            }
            step.reset(size, rand(), Vector::PLO);
            result = result + step;
            count++;
        }
        outfile << "After " << count << " steps, the subject has the following location: " << endl;
        outfile << result << endl;
        outfile << " or " << endl;
        result.polar_mode();
        outfile << result << endl;
        outfile << "Average outward distance per step = " << dis/count << endl;
        outfile << endl;
        result.reset(0.0, 0.0);
        cout << "Enter again: ";
    }

    outfile.close();
    return 0;
}