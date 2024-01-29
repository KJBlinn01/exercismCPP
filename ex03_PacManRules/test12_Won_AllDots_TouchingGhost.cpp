#include <stdio.h>
#include <iostream>
using namespace std;

// TEST: Pac-man doesn't win b/c all the dots are eaten but touching ghost
bool won(bool, bool, bool);
bool lost(bool, bool);

int main(){
    bool has_eaten_all_dots = true;
    bool power_pellet_active = false;
    bool touching_ghost = true;
    bool expected = false;
    bool actual = won(has_eaten_all_dots, power_pellet_active, touching_ghost);

    if (expected != actual){
         cout << "FAILED: expected should be " << expected << \
         " actual value when testing " << actual;
         return 1;
    }

    cout << "Passed!" << endl;
}