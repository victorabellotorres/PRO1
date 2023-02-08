/*
    A pair of integers greater than zero (a, b) is three-sorted if a can be divided by
    three at least as many times as b can be divided by three. For example, pair
    (18, 75) is three-sorted because 18 can be divided by three twice and 75 just
    once. Pairs (6, 21) and (21, 6) are also three-sorted. However, pair (75, 18)
    is not three-sorted.

    Given a sequence of pairs of integers greater than zero, write a program
    that, for each pair, outputs the word yes if the pair is three-sorted or no
    otherwise.
*/
#include <iostream>
using namespace std;

// Pre: a > 0 and b > 0
// Post: returns true when  pair (a, b) is three-sorted
//      returns false otherwise
bool is_three_sorted(int a, int b) {
    if (b%3 != 0) return true;
    else if (a%3 != 0) return false;
    else return is_three_sorted(a/3, b/3);
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (is_three_sorted(a, b)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}