/*
    Write a program that reads a sequence of natural numbers and prints the position of the first even number.

    Input consists of a sequence of natural numbers that contains, at least, one even number.

    Print the position of the first even number of the sequence.
*/
#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    while (cin >> n and n%2 != 0) {
        ++count;
    }
    cout << count << endl;
}