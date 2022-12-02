/*
    Let p[0… n] be a vector of integer numbers that contains the coefficients of a
    polynomial of degree n≥0. For instance, the vector p=⟨3,2,5,−1⟩ represents
    p(x)=3+2x+5x2−x3, a polynomial of degree n=3.
*/
#include <iostream>
#include <vector>
using namespace std;


int evaluate(const vector<int>& P, int x) {
    int m = P.size();
    int result = 0;
    
    for (int i = m - 1; i >= 0; --i) {
        result = result*x + P[i];
    }
    
    return result;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i=0; i<n; ++i) cin >> P[i];
        int x;  cin >> x;
        cout << evaluate(P,x) << endl;
    }
}
