/*
    Write a program that reads sequences of natural numbers, and that for each one prints the number of pairs of consecutive numbers such
    that the second number of the pair is greater than the first one.

    Input consists of a natural number n, followed by n sequences of strictly positive natural numbers. Each sequence ends with a zero.

    For every sequence, print in a line the number of pairs of consecutive numbers such that the second number of the pair is greater than the first one.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; --i) {
        int n_pairs = 0;

        int num, previous_num;
        cin >> num;
        previous_num = num;
        while (num != 0) {
            cin >> num;
            if (num > previous_num) ++n_pairs;
            previous_num = num;
        }
        cout << n_pairs << endl;
    }
}