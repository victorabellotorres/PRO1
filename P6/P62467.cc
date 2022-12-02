/*
    Write a program that reads a natural number n, and prints 2n − 1 bars of
    asterisks, following the pattern that can be deduced from the examples:
    Input: 3
    Output:
    *
    **
    *
    ***
    *
    **
    *
*/
#include <iostream>
using namespace std;

void print_bars(int n) {
    if (n > 1) {
        print_bars(n - 1);

        for (int i = n; i > 0; --i) {
            cout << "*";
        }
        cout << endl;

        print_bars(n - 1);
    }
    else cout << "*" << endl;
}

int main() {
    int n;
    cin >> n;

    print_bars(n);
}