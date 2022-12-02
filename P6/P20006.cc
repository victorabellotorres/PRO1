/*
    Write a program that reads a prefixed expression, and prints the result of
    evaluating it. The three possible operators are sum, substraction and
    multiplication. The operands are natural numbers between 0 and 9 (both included).
*/
#include <iostream>
using namespace std;

int read_prefixed_expresion() {
    char c;
    cin >> c;

    if (c == '+') return read_prefixed_expresion() + read_prefixed_expresion();
    else if (c == '-') return read_prefixed_expresion() - read_prefixed_expresion();
    else if (c == '*') return read_prefixed_expresion() * read_prefixed_expresion();
    else return int(c - '0');
}

int main() {
    cout << read_prefixed_expresion() << endl;
}