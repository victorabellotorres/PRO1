#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		cout << n << " x " << i << " = "<< n*i <<endl;
		++i;
	}
}