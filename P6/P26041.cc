/*
    Write a program that reads a sequence of words and prints it in reverse order.
*/
#include <iostream>
using namespace std;

void read_words() {
    string s;
    if (cin >> s) {
        read_words();
        cout << s << endl;
    }
}

int main() {
    read_words();
}