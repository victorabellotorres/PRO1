/*
	Program that reads two numbers x and y, and prints all numbers
	between x and y (or between y and x), in decreasing order.
*/

#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	if (x > y)
		while(x >= y){
			cout << x << endl;
			x--;
		}
	else
		while(y >= x){
			cout << y << endl;
			y--;
		}
}