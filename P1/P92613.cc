/*
    Program that reads a real number x≥0 and prints ⌊ x ⌋ (the floor of x),
    ⌈ x ⌉ (the ceiling of x), and the rounding of x.
*/

#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    if (x == int(x)) {
        cout << int(x) << " " << int(x) << " " << int(x) << endl;
    }
    else if ((x >= (int(x) + 0.5)) && (x >= 0))
        cout << int(x) << " " << int(x) + 1 << " " << int(x) + 1 << endl;
    else if ((x < (int(x) + 0.5)) && (x >= 0))
        cout << int(x) << " " << int(x) + 1 << " " << int(x) << endl;
}
