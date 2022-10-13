/*
    Write a program that reads a sequence of characters ended in a dot and tells if the sequence has any lowercase ‘a’ or not.

    Input consists of a sequence of characters ended in ‘.’.

    Print “yes” or “no” depending on whether ‘a’ appears in the sequence or not.
*/
#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    while (c != '.' and c != 'a') cin >> c;

    if (c == 'a') cout << "yes" << endl;
    else cout << "no" << endl;
}
