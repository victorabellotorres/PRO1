/*
    Write a program that provided two integers n and b where n ≥ 1 and b ≥ 0, computes the greatest integer a such that an = a×⋯× a
    is less or equal than b. For instance for n = 4 and b = 45 number a is 2 because 2×2×2×2 is less or equal than 45 but 3×3×3×3 is greater than 45.

    The input is a sequence of pairs of integers n and b. Number n is greater than zero and integer b is nonnegative.

    For each pair n and b in the input sequence, a line with the greatest integer a such that an ≤ b.

    Do not use any kind of math library. Function pow is forbidden. It is not asked for a very efficient program.
*/
#include <iostream>
using namespace std;

int main() {
    int n, b;
    while (cin >> n >> b) {
        bool found = false;
        int base = 1;
        while (not found) {
            int product = 1;
            for (int j = 0; j < n; ++j) {
                product *= base;
            }
            if (product > b) {
                cout << base - 1 << endl;
                found = true;
            }
            ++base;
        }
    }
}