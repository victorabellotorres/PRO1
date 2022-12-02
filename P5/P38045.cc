/*
    Write a program that reads a sequence of natural numbers, and prints the square and the square root of each one.

    Input consists of a sequence of natural numbers.

    For every given number, print in a line its square, and its square root with six digits after the decimal point.

    Use the procedure that your programming language already provides to compute square roots.
*/
#include <iostream>
#include <cmath>
using namespace std;
    
int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    int n;
    while (cin >> n) {
        cout << n*n << " " << sqrt(double(n)) << endl;
    }
}