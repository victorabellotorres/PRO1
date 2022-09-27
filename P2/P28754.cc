/*
    Program that reads a number and prints its binary
    representation reversed.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n > 1) {
        cout << n%2;
        n /= 2;
    }
    cout << n << endl;
}