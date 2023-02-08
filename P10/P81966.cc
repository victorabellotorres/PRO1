/*
    Write an efficient recursive function that returns the position of x in the subvector v[left..right]. The function must return −1 if x does not belong to
    v[left..right] or if left > right.
*/
#include <iostream>
#include <vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right) {
    int mid = (left + right)/2;

    if (left > right) return -1;
    else if (v[mid] > x) return position(x, v, left, mid - 1);
    else if (v[mid] < x) return position(x, v, mid + 1, right);
    else return mid;
}

int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int left, right;
            cin >> x >> left >> right;
            cout << position(x, V, left, right) << endl;
        }
    }
    return 0;
}
