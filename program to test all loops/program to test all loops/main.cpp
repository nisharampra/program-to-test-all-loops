//
//  main.cpp
//  program to test all loops
//
//  Created by Nisha Ramprasath on 28/10/23.
//

#include <iostream>
using namespace std;

int main() {
    //normal loop
    int a = 0;
    while (a < 10) {
        cout << "a " << a << endl;
        a++;
    }
//while loop
    int b = 0;
    do {
        cout << "b " << b << endl;
        b++;
    } while (b < 10);
//for loop
    for (int i = 0; i < 10; i++) {
        cout << "i " << i << endl;
    }

    return 0;
}

