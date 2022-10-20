/*
    Write a program that reads several numbers, and for each one prints the product of its digits,
    and the product of the digits of the latest product, etcetera, until the resulting product has just one digit.

    Input consists of several natural numbers.

    For every number, print the product of the digits of the number, the product of the digits of the previous product,
    etcetera, one per line, until the resulting product has just one digit. Print a line with 10 dashes after the output for every number.
*/
#include <iostream>
using namespace std;

int main() {
    int c;
    while (cin >> c) {
        
        if (c < 10) cout << "The product of the digits of " << c << " is " << c << '.' << endl;
        else {
            while (c >= 10) {
            cout << "The product of the digits of " << c;
            int product = 1;
            while (c > 0)  {
                product *= c%10;
                c /= 10;
            }
            cout << " is " << product << '.' << endl;

            c = product;
            }
        }

        cout << "----------" << endl;
    }
}