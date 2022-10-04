/*
    Program that, given a number n, prints a “triangle of size n”.

    Input consists of a natural number n.

    Print n lines, in such a way that the i-th line contains i asterisks.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++)
            cout << '*';
        cout << endl;
    }
}