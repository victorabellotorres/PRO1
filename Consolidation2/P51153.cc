/*
    Write a program that reads sequences of natural numbers, and for each one tells
    if it has two elements such that their sum is an odd number.Write a program that
    reads sequences of natural numbers, and for each one tells if it has two elements
    such that their sum is an odd number.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> read_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    return v;
}

bool check_sum_odd(const vector<int>& v) {
    int m = v.size();

    for (int i = 1; i < m; ++i) {
        if ((v[0] + v[i])%2 != 0) return true;
    }
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v = read_vector(n);

        if (check_sum_odd(v)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}