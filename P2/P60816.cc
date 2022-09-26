#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n > 15) {
        if (n%16 > 9)
            cout << char('A' + (n%16 - 10));
        else
            cout << n%16;
        n /= 16;
    }
    if (n > 9)
        cout << char('A' + (n%16 - 10)) << endl;
    else
        cout << n << endl;
}