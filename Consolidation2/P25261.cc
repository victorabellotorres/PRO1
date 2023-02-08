/*
    Write a program that reads a sequence of lists of numbers, and prints each list
    sorted in decreasing order.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(const vector<int>& v) {
    int m = v.size();
    for (int i = 0; i < m; ++i) {
        if (i > 0) cout << " ";
        cout << v[i];
    }
    cout << endl;
}

vector<int> read_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    return v;
}

bool decreasing_order(int x, int y) {
    return x > y;
}

int main() {
    int n;
    while(cin >> n) {
        vector<int> v = read_vector(n);

        sort(v.begin(), v.end(), decreasing_order);

        print_vector(v);
    }
}