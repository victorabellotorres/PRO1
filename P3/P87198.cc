/*
    Write a program that for every given n prints an “octagon of size n” according to
    the pattern shown in the examples.

    Input consists in several natural numbers n ≥ 2.

    For every n, print an “octagon of size n” using capital exes.
    Do not print any space to the right of the exes. Print an empty line after each octagon.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int spaces = n - 1;
        int crosses = n;

        //primera part de l'octagon
        for (int j = spaces; j > 0; --j) {
            for (int i = 0; i < j; ++i) cout << " ";
            for (int i = 0; i < crosses; ++i) cout << "X";
            cout << endl;
            crosses += 2;
        }
        //part central de l'octagon
        for(int j = 0; j < n; ++j) {
            for(int i = 0; i < crosses; ++i) cout << "X";
            cout << endl;
        }
        //part final de l'octogon
        spaces = 1;
        crosses -= 2;
        for(int j = spaces; j <= n - 1; ++j) {
            for (int i = 0; i < j; ++i) cout << " ";
            for (int i = 0; i < crosses; ++i) cout << "X";
            cout << endl;
            crosses -= 2;
        }
        cout << endl;

    }
}