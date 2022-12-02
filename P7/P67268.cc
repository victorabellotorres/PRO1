/*
    Write a program that reads sequences of integer numbers,
    and prints each one reversing the order of its elements.
*/
#include <iostream>
#include <vector>
using namespace std;

void read_vector(vector<int>& v) {
    int m = v.size();
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        v[i] = num;
    }
}

void vector_inversed_order(const vector<int>& v) {
    int m = v.size();

    for (int i = m - 1; i >= 0; --i) {
        cout << v[i];
        if (i != 0) cout << " ";
    }
    cout << endl;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        read_vector(v);

        vector_inversed_order(v);
    }
}