/*
    Given a natural number n, let s(n) be the sum of the digits of n. In this exercise, we say that n is a
    perfect prime if the infinite sequence n, s(n), s(s(n)), …only contains prime numbers. For instance, 977
    is a perfect prime, because 977, 9 + 7 + 7 = 23, 2 + 3 = 5, 5, …, are all prime numbers.

    Write a recursive function that tells if a natural number n is a perfect prime or not.
*/
#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return n >= 2; // 0 and 1 are not primes
}

bool is_perfect_prime(int n) {
    if (not is_prime(n)) return false;
    if (n < 10) return true;

    int sum = 0;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }

    return is_perfect_prime(sum);
}


int main() {
    int n;
    while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}
