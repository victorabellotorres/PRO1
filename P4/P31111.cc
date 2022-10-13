/*
    Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.

    Input consists of a sequence of parentheses.

    Print “yes” or “no”, depending on whether the parentheses close correctly or not.
*/
#include <iostream>
using namespace std;

int main() {
    int count_parentheses = 0;

    char parentheses;
    while ((cin >> parentheses) and count_parentheses >= 0) {
        if (parentheses == '(') ++count_parentheses;
        else --count_parentheses;
    }
    if (count_parentheses == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}