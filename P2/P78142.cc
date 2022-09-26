#include <iostream>
using namespace std;

int main() {
	double n,sum;
	int count = 0;
	sum = 0;

	while(cin >> n) {
		sum += n;
		count++;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << sum/count << endl;
}