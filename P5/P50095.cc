/*
    Write a program that reads a sequence of prime numbers and, for each one, prints the next prime number.

    Input is all natural numbers, and consists of a sequence of prime numbers ended with a non-prime number.

    For every given prime number, print in a line the next prime number.
*/
#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num == 0 or num == 1) return false;
    for (int i = 2; i*i <= num; ++i) {
        if (num%i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    while (is_prime(n)) {
        ++n;
        while (not is_prime(n)) {
            ++n;
        }

        cout << n << endl;
        cin >> n;
    }
}