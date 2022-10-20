/*
    Write a program that reads triples of natural numbers a, b and k, and for each one computes and prints the result of: 1/a + 1/(a+k) + 1/(a+2k) + ...
    for all fractions with denominator smaller than or equal to b.

    Input consists of several triples of natural numbers a, b and k, such that 1 ≤ a≤ b and k ≥ 1.

    For each triple, print in a line the result of the sum with four digits after the decimal point.
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    
    cout.setf(ios::fixed);
    cout.precision(4);

    while(cin >> a >> b >> k) {
        double sum = 0;
        int denominator = a;
        while (denominator <= b) {
            sum += 1.0/(denominator);
            denominator += k;
        }
        cout << sum << endl;
    }
}