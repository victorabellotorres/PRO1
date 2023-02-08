/*
    Write a function that returns the position of the maximum element of v[0..m]. If there is a tie, the smaller position must be returned.
*/
#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
    int max_pos = 0;
    double max = v[0];

    for (int i = 1; i <= m; ++i) {
        if (v[i] > max) {
            max = v[i];
            max_pos = i;
        }
    }
    return max_pos;
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i)
            cin >> V[i];
        cout << position_maximum(V, m) << endl;
    }
    return 0;
}