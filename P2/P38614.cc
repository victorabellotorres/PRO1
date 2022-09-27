/*
	A natural number is called cool if the sum of the digits which
	are in odd positions (starting to count on the right) is an
	even number. For instance, 2 and 679031 are cool, but 357199 and
	607 are not.

	Program that prints if a given number is cool or is not.
*/

#include <iostream>
using namespace std;

int main() {
	int n,sum = 0;
	cin >> n;
	cout << n;

	while(n > 0) {
		sum += n % 10;
		n /= 100;
	}

	if ((sum % 2) == 0) cout << " IS COOL" << endl;
	else cout << " IS NOT COOL" << endl;
}