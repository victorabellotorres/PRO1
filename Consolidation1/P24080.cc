/*
    Write a program that prints squares with n2 n’s.

    Write a program that prints squares with n2 n’s.

    For every n, print a square of size n × n full of n’s. Separate two squares with an empty line.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    bool first_time = true;
    while(cin >> n) {
        if (not first_time) cout << endl;
        else first_time = false;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cout << n;
            }
            cout << endl;
        }
    }
}