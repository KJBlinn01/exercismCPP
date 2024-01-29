#include <stdio.h>
#include <iostream>
using namespace std;

// TEST: Ghost doesn't get eaten b/c pac-man isn't touching a ghost
bool can_eat_ghost(bool, bool);

int main(){
    bool power_pellet_active = true;
    bool touching_ghost = false;
    bool expected = false;
    bool actual = can_eat_ghost(power_pellet_active, touching_ghost);

    if (expected != actual){
         cout << "FAILED: expected should be " << expected << \
         " actual value when testing " << actual;
         return 1;
    }

    cout << "Passed!" << endl;
}