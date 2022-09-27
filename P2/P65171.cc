/*
	Programa que donat un natural n≥ 2 seguit de n nombres reals x1, x2,…, xn,
	calculi la variança dels nombres fent servir la fórmula:
	((1 / (n - 1)) * (i=1)∑xi²) - ((1 / (n * (n - 1))) * ((i=1)∑xi)²)
	(Els sumatoris arriben fins a i = n)
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	double x,sum1 = 0,sum2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum1 += x*x;
		sum2 += x;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << ((1. / (n - 1)) * sum1) - ((1. / (n * (n - 1))) * (sum2*sum2)) << endl;
}