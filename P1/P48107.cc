/*
    Program that reads two natural numbers a and b, with b > 0,
    and prints the integer division d and the remainder r of a divided by b.
*/

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << a/b << ' ' << a%b << endl;
}
