/*
    Write a program that reads a number x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).

    Input consists of a real number x followed by the description of the polynomial p(z): the real coefficients c0,
    c1, …, cn in this order. (The first sample input/output corresponds to the evaluation of p(z) = 3 + 4z + 5z2 at x = 2.)

    Print p(x) with 4 digits after the decimal point.
*/
#include <iostream>
using namespace std;

int main() {
    double result = 0;
    double squares_x = 1;
    double x, c;
    cin >> x;
    while (cin >> c) {
        result += c*squares_x;
        squares_x *= x;
    }

    cout.setf(ios::fixed);
    cout.precision(4);
    cout << result << endl;
}