#include <iostream>
#include <stdio.h>

using namespace std;

// TEST: Lasagna only has one minute left and 5 layers
int elapsedTime(int, int);

int main(){
    int timeSpendInOven = 39;
    int timePerLayer = 2;
    int layers = 5;
    int actual = elapsedTime(layers, timeSpendInOven);
    int expected = timePerLayer * layers + timeSpendInOven;

    if (expected != actual){
        cout << "FAILED: expected should be " << expected << " actual value when testing " << elapsedTime(layers, timeSpendInOven);
        return 1;  
    }
    
    cout << "Passed!" << endl;
}