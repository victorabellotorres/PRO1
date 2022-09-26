#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	int i = x;
	if (x <= y)
		while(i <= y){
			if (i == y)
				cout << i << endl;
			else
				cout << i<< ',';
			i++;
		}
	else 
		cout << endl;
}