#include <iostream>
#include <stdio.h>

using namespace std;

// TEST: Lasagna has 6 layers
int preparationTime(int);

int main(){
    int timePerLayer = 2;
    int layers = 6;
    int actual = preparationTime(layers);
    int expected = timePerLayer * layers;

    if (expected != actual){
        cout << "FAILED: expected should be " << expected << " actual value when testing " << preparationTime(layers);
        return 1;  
    }
    
    cout << "Passed!" << endl;
}