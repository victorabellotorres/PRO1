/*
    Write a procedure that, supposing that all the positions of v, except maybe the last one, are in non-decreasing order, leaves v totally in non-decreasing order.

    For instance, if v is ⟨ 2, 4, 7, 7, 8, 9, 5⟩, it must become ⟨ 2, 4, 5, 7, 7, 8, 9⟩.
*/
#include <iostream>
#include <vector>
using namespace std;

void swap(vector<double>& v, int i, int j) {
    double aux = v[i];
    v[i] = v[j];
    v[j] = aux;

}

void insert(vector<double>& v) {
    int m = v.size() - 1;

    while (m >= 1 and v[m - 1] > v[m]) {
        swap(v, m, m - 1);
        --m;
    }
}

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
        }
        insert(V);
        for (int i = 0; i < n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
    return 0;
}
