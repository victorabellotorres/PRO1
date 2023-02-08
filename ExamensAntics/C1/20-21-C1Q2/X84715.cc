/*
    Write a code that draws letters V of different heights.

    The input is an integer n greater than zero.

    The drawing of the letter V of height n.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int middle_spaces = 2*n - 3;
    for (int i = 0; i < n; ++i) {
        //print inicial spaces
        for (int j = i; j > 0; --j) cout << ' ';
        cout << 'V'; //first V
        for (int j = middle_spaces; j > 0; --j) {
            cout << ' ';
            if (j == 1) cout << 'V'; //print last V
        }
        cout << endl;
        middle_spaces -= 2;
    }
}