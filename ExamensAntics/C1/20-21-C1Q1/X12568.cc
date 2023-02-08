/*
    Draw the outline of a right triangle of size n as shown in the examples.

    An integer n greater than one.

    The outline of a right triangle of height n.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (i == 0) cout << '*'; // first line of *
            else if (j == i) cout << '*';
            else cout << ' ';
        }
        cout << '*' << endl;
    }
    
}