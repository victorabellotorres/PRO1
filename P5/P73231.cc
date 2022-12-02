/*
    Write a function that returns the maximum of four given integer numbers a, b, c and d.
        int max4(int a, int b, int c, int d);

    You only need to submit the required procedure; your main program will be ignored.

    Using function max2(a, b) of exercise P57846: “Maximum of two integer numbers” could be useful.
*/
#include <iostream>
using namespace std;

int max2(int x, int y) {
    if (x >= y) return x;
    else return y;
}

int max4(int a, int b, int c, int d) {
    return max2(max2(a, b), max2(c, d));
}

int main() {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        cout << max4(a, b, c, d) << endl;
    }
}
