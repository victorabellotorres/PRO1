/*
    Write a program that reads a sequence of angles in degrees, and prints their sine and their cosine.

    Input consists of a sequence of real numbers that represent angles in degrees.

    For each given angle, print a line with its sine and its cosine. Print all the numbers with six digits after the decimal point.

    Use the procedures that your programming language already provides to compute sines and cosines.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    double n;
    while (cin >> n) {
        n *= (M_PI/180); // angle to radians
        cout << sin(n) << " " << cos(n) << endl;
    }
}