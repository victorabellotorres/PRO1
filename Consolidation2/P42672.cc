/*
    Given a natural number x > 0 with n bits, we denote with xn−1… x0 its representation
    in base 2. For example, x = 8 in base 2 is 1000, so x3 = 1 and x2 = x1 = x0 = 0.

    Write a program to mix the base 2 representations of two given natural numbers x
    and y with the same number of bits n. That is, print xn−1 yn−1 … x0 y0.
*/
#include <iostream>
using namespace std;

void print_mix_base2(int x, int y) {
    if (x < 2 or y < 2) cout << x << y;
    else {
        print_mix_base2(x/2, y/2);
        cout << x%2 << y%2;
    }
}

int main() {
    int x, y; 
    while(cin >> x >> y) {
        print_mix_base2(x, y);
        cout << endl;
    }
}