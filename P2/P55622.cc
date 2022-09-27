/*
    Program that reads a number and prints its number of digits.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    if (n > 0) {
        for(int x = n ; x > 0 ; i++) x /= 10;
        cout << "The number of digits of " << n << " is " << i << '.' <<  endl;   
        }
    else cout << "The number of digits of 0 is 1." <<  endl;
}