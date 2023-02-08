#include <iostream>
#include <vector>
using namespace std;

int evaluate() {
    char c;
    cin >> c;
    if (c == '(') {
        int x = evaluate();

        char op;
        cin >> op;

        int y = evaluate();

        cin >> c;

        if (op == '+') return x + y;
        else if (op == '-') return x - y;
        else return x * y;

    }
    else return c - '0';
}

int main() {
    cout << evaluate() << endl;
}