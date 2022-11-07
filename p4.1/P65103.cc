/*
    Write a program that, given an integer number i and a
    sequence of natural numbers x1, …, xn, prints xi.

    Input begins with an integer number i, followed by the sequence x1, …, xn.
    
    If the position i is correct, print the content of i as it is shown in the examples.
    Otherwise, print “Incorrect position.”.
*/
#include <iostream>
using namespace std;

int main() {
    int position;
    cin >> position;
    bool position_found = false;

    int count = 1;
    int n;
    while (cin >> n and position_found == false) {
        if(count == position) {
            cout << "At the position " << position << " there is a(n) " << n << '.' << endl;
            position_found = true;
        }
        else ++count;
    }
    if (position_found == false) cout << "Incorrect position." << endl;;
    

}