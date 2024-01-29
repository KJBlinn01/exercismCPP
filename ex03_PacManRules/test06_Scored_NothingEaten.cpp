#include <stdio.h>
#include <iostream>
using namespace std;

// TEST: Pac-man doesn't scores when noting eaten
bool scored(bool, bool);

int main(){
    bool touching_power_pellet = false;
    bool touching_dot = false;
    bool expected = false;
    bool actual = scored(touching_power_pellet, touching_dot);

    if (expected != actual){
         cout << "FAILED: expected should be " << expected << \
         " actual value when testing " << actual;
         return 1;
    }

    cout << "Passed!" << endl;
}