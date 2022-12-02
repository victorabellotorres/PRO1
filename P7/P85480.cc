/*
    Write a program that reads sequences of natural numbers, and for each one tells
    if it has two elements such that their sum is a prime number.
*/
#include <iostream>
#include <vector>
using namespace std;

// precondition: a vector of integers (wether defined or not)
// postcondition: a vector defined with the inputted data
void read_vector(vector<int>& v) {
    int m = v.size();

    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        v[i] = num;
    }
}

// precondition: an integer
// postcondition: true if the integer is prime, false if it is not
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i*i <= num; ++i) {
        if (num%i == 0) return false;
    }

    return true;
}

// precondition: a vector of integers
// postcontidion: tells if there are two integers in the vector such that their sum is a prime number
bool pairs_of_sequence(const vector<int>& v) {
    int m = v.size();

    for (int i = 0; i < m; ++i) {
        for (int j = i + 1; j < m; ++j) {
            int pair_sum = v[i] + v[j];
            if (is_prime(pair_sum)) return true;
        }
    }
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        read_vector(v);

        if (pairs_of_sequence(v)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}