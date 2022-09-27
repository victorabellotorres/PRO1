/*
	Program that reads two numbers a and b,
	and prints all numbers between a and b.
*/

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