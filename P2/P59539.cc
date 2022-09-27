/*
	Program that reads a number n and prints the n-th harmonic number, 
	defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	double r = 0;
	while (i <= n){
		r += 1.0/i;
		i++;
	}
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << r << endl;
}
