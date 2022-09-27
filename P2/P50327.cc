/*
    Program that reads a number and prints it reversed.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
     
    while(n >= 10) {
        cout << n%10;
        n /= 10;
    }
    cout << n << endl;
}