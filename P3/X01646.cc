/*
    Program that reads a basis for numeration and several numbers and prints the sum in base 10 of the digits in base b of each one.

    Input consists of the value of b≥ 2 followed by a sequence of natural numbers.

    For every number, print the sum (in base 10) of its digits in base b following the format of the examples: (base 10)
    29: 11
    7: 7
    0: 0
    1020: 3
*/
#include <iostream>
using namespace std;

int main() {
    int b,n;
    cin >> b;
    while(cin >> n) {
        int sum = 0;
        cout << n << ": ";
        while (n > 0) {
            sum += n % b;
            n /= b;
        }
        cout << sum << endl;
    }
}