/*
    Write a program that reads a list of words and prints the number of times that the word “hello” appears in it.

    There input is a sequence of strings.

    Print the number of occurrences of the word “hello”.

    Take into account that “hola” is different from “Hola”.
*/
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    string line;
    while (cin >> line) {
        if (line == "hello") ++count;
    }
    cout << count << endl;
}