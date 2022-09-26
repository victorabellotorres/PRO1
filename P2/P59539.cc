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
