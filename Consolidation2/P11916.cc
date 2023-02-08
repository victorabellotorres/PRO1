    
/*
    Write a program that, for every given natural number n, prints the approximation of e that we get by adding the n first terms of the series below.

    e = ∑ 1/i! // i < 0
*/
#include <iostream>
using namespace std;

double factorial(int x) {
    if (x == 0) return 1;
    else return x*factorial(x - 1);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    int n;
    while (cin >> n) {
        double e = 0;

        for (double i = 0; i < n; ++i) {
            e += 1.0/factorial(i);
        }

        cout << "With " << n << " term(s) we get " << e << "." << endl;
    }
}