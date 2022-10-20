/*
    Write a program such that, given a number n, prints a “rhombus of size n”.

    Input consists of a natural number n ≥ 1.

    Print 2*n − 1 lines, as shown in the examples.    
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int spaces = n - 1;
    int astheriscs = 1;

    //first part of the rhombus
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < spaces+astheriscs; ++j) {
            if (j < spaces) cout << ' ';
            else cout << '*';
        }
        --spaces;
        astheriscs += 2;
        cout << endl;
    }

    astheriscs -= 2;
    ++spaces;

    for (int i = n - 1; i > 0; --i) {
        ++spaces;
        astheriscs -= 2;
        for (int j = 0; j < spaces+astheriscs; ++j) {
            if (j < spaces) cout << ' ';
            else cout << '*';
        }
        cout << endl;
    }
    
}