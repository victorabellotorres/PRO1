/*
    Program that reads a letter and prints it in lowercase if it was uppercase,
    or prints it in uppercase if it was lowercase.
*/

#include <iostream>
using namespace std;

int main () {
    char x;
    cin >> x;
    if (x < 97){
        cout << char('a' + int(x - 'A')) << endl;
    }
    else {
        cout << char('A' + (int(x - 'a'))) << endl;
    }
}
