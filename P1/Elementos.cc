#include <iostream>
using namespace std;
// A > P > V > A
int main() {
char x,y;
cin >> x >> y;
if (x == y) cout << '-' << endl;
else if ((x == 'A' and y == 'P') or (x == 'P' and y == 'V') or (x == 'V' and y == 'A'))
    cout << 1 << endl;
else cout << 2 << endl;
}
