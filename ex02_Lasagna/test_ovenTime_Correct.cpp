#include <iostream>
#include <stdio.h>

using namespace std;

// TEST: This tests to see if the ovenTime() returns the proper cooking time 
int ovenTime();

int main(){
    int actual = ovenTime();
    int expected = 40;

    if (expected != actual){
        cout << "FAILED: expected should be " << expected << " actual value when testing " << ovenTime();
        return 1;  
    }
    
    cout << "Passed!" << endl;
}