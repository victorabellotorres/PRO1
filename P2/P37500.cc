/*
	Program that reads a number n, and prints all numbers between 0 and n.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 0;
	while (i <= n) {
		cout << i << endl;
		++i;
	}
}
