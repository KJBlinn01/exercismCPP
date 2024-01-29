#include <iostream>
#include <stdio.h>

using namespace std;

// TEST: Lasagna is half way done in the cooking process
int remainingOvenTime(int);

int main(){
    int timeSpendInOven = 20;
    int actual = remainingOvenTime(timeSpendInOven);
    int expected = 20;

    if (expected != actual){
        cout << "FAILED: expected should be " << expected << \
        " actual value when testing " << remainingOvenTime(timeSpendInOven);
        return 1;  
    }
    
    cout << "Passed!" << endl;
}