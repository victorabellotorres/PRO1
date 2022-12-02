/*
    Function that given an amount of seconds, calculates its equivalents in hours:minutes:seconds
*/
#include <iostream>
using namespace std;

// Precondition:
//      an amount of seconds in n
// Postcondition:
//      an amount of second represented in the hours minuts secons format
void decompose(int n, int& h, int& m, int& s) {
    s = n%60;
    n /= 60;
    m = n%60;
    h = n/60;
}

int main() {
    int n, h, m, s;
    while (cin >> n) {
        decompose(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}
