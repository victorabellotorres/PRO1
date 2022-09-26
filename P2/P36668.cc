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
