/*
    Write a recursive function that computesWrite a recursive function that computes
    the greatest common divisor of two natural numbers a and b using the fast version
    of the Euclidean algorithm.
*/
#include <iostream>
using namespace std;


int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}


int main() {
    int x, y;
    while (cin >> x >> y) {
        cout << gcd(x, y) << endl;
    }
}
