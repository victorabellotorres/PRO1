/*
	Program that reads a natural number n, and prints
	the result of the following sum: 1^2 + 2^2 + … + (n−1)^2 + n^2 
*/

#include <iostream>
using namespace std;

int main() {
	int n,r;
	cin >> n;
	int i = 1;
	r = 0;
	while (i <= n){
		r += i*i;
		i++;
	}
	cout << r << endl;
}
