/*
    Write a program that, given an integer number i and a sequence of natural
    numbers x1, …, xn, prints xi.

    Input begins with a number i, followed by the sequence x1, …, xn ended
    with −1. It is known that 1 ≤ i ≤ n.

    Print the content of the position i as it is shown in the examples.
*/
#include <iostream>
using namespace std;

int main() {
    int pos,n;
    cin >> pos;
    cout << "At the position " << pos;
    while(pos > 0 and cin >> n) {
        --pos;
    }
    cout << " there is a(n) " <<  n  << '.'<< endl;
}