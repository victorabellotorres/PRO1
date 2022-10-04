/*
    Program that computes the number of digits in several bases.

    Input consists of a sequence of pairs of natural numbers b and n, such that b≥ 2 and n≥ 1.

    For every pair, print the number of digits of n in base b.
*/
#include <iostream>
using namespace std;

int main() {
    int n,b,i;
    while(cin >> b >> n) {
        for(i = 1; n >= b; i++)
            n /= b;
        cout << i << endl;
    }
}