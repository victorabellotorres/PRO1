/*
    Write a program that reads a sequence of characters and prints the number of
    letters ‘a’ in the sequence before the first period.

    Input consists of a sequence of characters with at least one period.

    Print the number of times that ‘a’ appears in the sequence before the first period.
*/
#include <iostream>
using namespace std;

int main() {
    int count_a = 0;
    char c;
    cin >> c;
    while(c != '.') {
        if (c == 'a') ++count_a;
        cin >> c;
    }
    cout << count_a << endl;
}