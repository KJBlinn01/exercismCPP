#include <iostream>
#include <stdio.h>

using namespace std;

// TEST: Lasagna just put in the oven expected to return 40
int remainingOvenTime(int);

int main(){
    int timeSpendInOven = 0;
    int actual = remainingOvenTime(timeSpendInOven);
    int expected = 40;

    if (expected != actual){
        cout << "FAILED: expected should be " << expected << " actual value when testing " << remainingOvenTime(timeSpendInOven);
        return 1;  
    }
    
    cout << "Passed!" << endl;
}