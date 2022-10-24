/*
    Write a program to print in order all the divisors of a given number.

    Input consists of several cases, each with a natural number n between 1 and 109.

    For every n, print the divisors of n in increasing order.

    Your program must be “efficient” to be accepted by the judge.
    You are not allowed to use vectors or alike.

    Hint: Every divisor smaller than the square root of n has a corresponding divisor
    greater than the square root of n. It could be useful to make two loops,
    one for “small” divisors, and another for “large” divisors.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        cout << "divisors of " << n << ':';

        int last_smaller_divisor = 0;

        //divisors from 1 to n square root (smallers divisors)
        for(int i = 1; i*i <= n; ++i) {
            if (n%i == 0) cout << ' ' << i;
            last_smaller_divisor = i;
        }

        //divisors from n square root to n (biggers divisors)

        for(int i = last_smaller_divisor; i > 0; --i) {
            if (n%i == 0 and i*i != n) cout << ' ' << n/i;
        }
        cout << endl;        
    }
}
