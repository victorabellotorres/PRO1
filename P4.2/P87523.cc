/*
    Write a program that reads a sequence of letters that ends with a dot and tells if it contains the succession of consecutive letters ‘h’, ‘e’, ‘l’, ‘l’, ‘o’ or not.

    Input consists of a sequence of lowercase letters ended in ‘.’.

    Print “hello” if the input consecutively contains the letters ‘h’, ‘e’, ‘l’, ‘l’, ‘o’. Otherwise, print “bye”.
*/
#include <iostream>
using namespace std;

int main() {
    char c = ' ';
    bool found = false;
    cin >> c;
    while (c != '.' and not found) {
        if (c == 'h') {
            cin >> c;
            if (c == 'e') {
                cin >> c;
                if (c == 'l') {
                    cin >> c;
                    if (c == 'l') {
                        cin >> c;
                        if (c == 'o') {
                            found = true;
                        }
                    }
                }
            }
        }
        else cin >> c;
    }
    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;
}