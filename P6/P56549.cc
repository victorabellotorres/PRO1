/*
    Use recursion in order to write a program that prints every given number in binary, octal and hexadecimal notation.
*/
#include <iostream>
using namespace std;

void changeBase(int num, int base) {
    if (num < base) {
        if (num >= 10) cout << char('A' + num%10);
        else cout << num;
    } 
    else {
        changeBase(num/base, base);
        if (num%base >= 10) cout << char('A' + (num%base)%10);
        else cout << num%base;
    }
}   

int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        changeBase(n, 2);
        cout << ", ";
        changeBase(n, 8);
        cout << ", ";
        changeBase(n, 16);
        cout << endl;
    }
}