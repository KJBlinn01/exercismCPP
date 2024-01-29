#include <stdio.h>
#include <iostream>
using namespace std;

// TEST: Pac-man loses b/c touching ghost without power pellet
bool lost(bool, bool);

int main(){
    bool power_pellet_active = false;
    bool touching_ghost = true;
    bool expected = true;
    bool actual = lost(power_pellet_active, touching_ghost);

    if (expected != actual){
         cout << "FAILED: expected should be " << expected << \
         " actual value when testing " << actual;
         return 1;
    }

    cout << "Passed!" << endl;
}