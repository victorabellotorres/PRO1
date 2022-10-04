/*
    Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.

    Input consists of several pairs of natural numbers n and m such that n ≥ m.

    For every pair, print Hn − Hm with 10 digits after the decimal point.
*/
#include <iostream>
using namespace std;

int main() {
    int m,n;
    double sum;
    while (cin >> m >> n) {
        sum = 0;
        for (int i = n + 1; i <= m; ++i){

            sum += 1./i;
        }
        cout.setf(ios::fixed);
        cout.precision(10);
        cout << sum << endl;
    }
}