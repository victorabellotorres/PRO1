/*
    Program that reads a number and prints its hexadecimal representation
    reversed. Follow the convention to use the letters from ‘A’ to ‘F’ to
    represent the values from 10 to 15.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n > 15) {
        if (n%16 > 9)
            cout << char('A' + (n%16 - 10));
        else
            cout << n%16;
        n /= 16;
    }
    if (n > 9)
        cout << char('A' + (n%16 - 10)) << endl;
    else
        cout << n << endl;
}