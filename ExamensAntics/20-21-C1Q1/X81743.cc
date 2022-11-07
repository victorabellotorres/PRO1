/*
    Write a program such that given an integer n > 0, two letters c1 and c2 in alphabetical order,
    and a sequence of letters, outputs the number of the n-th first letters in the sequence that are between c1 and c2.

    The input is an integer n > 0, two lowercase letters c1 and c2 where c1 is smaller than or equal to c2 in
    alphabetical order, and a sequence of at least n lowercase letters.

    The output is the number of the n-th first letters in the sequence that are between c1 and c2 (both included).
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    char first,last;
    cin >> n >> first >> last;

    int count = 0;
    char c;
    for (int i = n; i > 0; --i) {
        cin >> c;
        if (c >= first and c <= last) ++count;
    }

    cout << count << endl;
}