/*
    Write a program that reads a sequence of words until the first appearance of the word “end”, and prints it reversed.

    Input consists of a sequence of words. At least one is “end”.
*/
#include <iostream>
using namespace std;

void read_words() {
    string s;
    cin >> s;
    
    if (s != "end") {
        read_words();
        cout << s << endl;
    }
}

int main() {
    read_words();
}