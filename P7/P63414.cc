/*
    Write a program that reads a sequence of natural numbers and that prints, for
    each one, how many times it appears.

    Input consists of a natural number n, followed by n natural numbers between
    1000000000 and 1000001000 (both included).
*/
#include <iostream>
#include <vector>
using namespace std;

// precondition: input value beetween 1000000000 and 1000001000 (both included).
// postcondition: a vector of values between 0 and 1000 (both included).
void read_vector(vector<int>& v, int n) {

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;

        ++v[value%10000]; // %1000 and %1001 not valid
    }
}

// precondition: a sorted
// postcondition: for every value prints => value : frequence
void count_frequences(const vector<int>& v) {
    int m = v.size();

    for (int i = 0; i < m; ++i) {

        if(v[i] > 0) {
            cout << 1000000000 + i << " : " << v[i] << endl;
        }
    }
}

int main() {
    int n; 
    cin >> n;
    vector<int> v(1001, 0);

    read_vector(v, n);

    count_frequences(v);
}