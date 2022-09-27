/*
	Program that reads a number n and prints
	the “multiplication table” of n.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while (i <= 10) {
		cout << n << '*' << i << " = "<< n*i <<endl;
		++i;
	}
}