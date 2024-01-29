#include <stdio.h>
#include <iostream>
using namespace std;

// TEST: Pac-man scores when eating a dot
bool scored(bool, bool);

int main(){
    bool touching_power_pellet = false;
    bool touching_dot = true;
    bool expected = true;
    bool actual = scored(touching_power_pellet, touching_dot);

    if (expected != actual){
         cout << "FAILED: expected should be " << expected << \
         " actual value when testing " << actual;
         return 1;
    }

    cout << "Passed!" << endl;
}