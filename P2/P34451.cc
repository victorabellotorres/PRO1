#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	int count = 0;
	int n;
	while (cin >> n) {
		if (n%x == 0)
			count++;
	}
	cout << count << endl;
}