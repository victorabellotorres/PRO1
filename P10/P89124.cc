/*
    Given several natural numbers, tell which are prime and which are not.
    Use the sieve of Eratosthenes
*/
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;


void sieve_multiples(vector<bool>& v, int num) {
    int limit = MAX/num;
    for (int i = num; i <= limit; ++i) {
        v[num*i] = false;
    }
}

void sieve_of_eratosthenes(vector<bool>& v) {

    v[0] = false;
    v[1] = false;

    for (int i = 2; i*i <= MAX; ++i) {
        if (v[i]) sieve_multiples(v, i);
    }
}

int main() {
    vector<bool> prime_numbers(MAX + 1, true);

    sieve_of_eratosthenes(prime_numbers);

    int x;
    while (cin >> x) {
        if (prime_numbers[x]) cout << x << " is prime" << endl;
        else cout << x << " is not prime" << endl;
    }
}