/*
	Program that reads a sequence of characters ended with a period and
	prints the number of letters ‘a’ in the sequence.
*/

#include <iostream>
using namespace std;

int main() {
	char ch;
	int count = 0;
	cin >> ch;
	while(ch != '.'){
		if (ch == 'a') count++;
		cin >> ch;
	}
	cout << count << endl;
}