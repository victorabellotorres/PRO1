/*
    The scalar product of two vectors u=(u0,…,un−1) and v=(v0,…,vn−1) is ∑i=0^n−1 ui·vi.

    Write a function that returns the scalar product of u and v.
*/
#include <iostream>
#include <vector>
using namespace std;

// precondition: The vectors u and v have the same size.
// postcondition: scalar product u·v
double scalar_product(const vector<double>& u, const vector<double>& v) {
    int m = u.size();
    double scalar_product = 0;

    for (int i = 0; i < m; ++i) {
        scalar_product += u[i]*v[i];
    }

    return scalar_product;
}


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> u(n);
        vector<double> v(n);
        for (int i = 0; i < n; ++i) cin >> u[i];
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << scalar_product(u, v) << endl;
    }
}
    