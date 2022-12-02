/*
    Write a program that reads a non-empty sequence of integer numbers, and tells how many
    of them are equal to the last one.
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

int equal_to_last(const vector<int>& v) {
    int m = v.size();
    int count = 0;

    for(int i = 0; i < m - 1; ++i) {
        if (v[i] == v[m - 1]) ++count;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    read_vector(v);

    cout << equal_to_last(v) << endl;
} 