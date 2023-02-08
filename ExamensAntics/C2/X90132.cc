/*
    Write a program that given a list of operations over non negative integers outputs
    the result for each of them. Sum, subtraction and multiplication are the only
    allowed operations.
*/
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    char op;

    cin >> n1;
    while (n1 >= 0) {
        cin >> op >> n2;

        if (op == '+') cout << n1 + n2 << endl;
        else if (op == '-') cout << n1 - n2 << endl;
        else cout << n1*n2 << endl;

        cin >> n1;
    }
}