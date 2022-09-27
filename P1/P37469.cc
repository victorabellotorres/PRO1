/*
    Program that, given a number of seconds n, 
    prints the number of hours, minutes and seconds represented by n.
*/

#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    cout << s / 3600 << ' ' << s % 3600 / 60 << ' ' << s % 3600 % 60 << endl;
}
