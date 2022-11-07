/*
    Write a program that, given a sequence of integer numbers strictly positive ended with 0,
    prints if contains any peak greater than 3143 (the height of Pica d’Estats). A peak is an
    integer of the sequence that has a predecessor and a successor and it is strictly greater than them.

    Input is a sequence of integer numbers strictly positive ended with 0. At least, always there are three
    integer numbers (not counting the 0).

    The output must be “YES” if there is any peak greater than 3143, and “NO” otherwise. 
*/
#include <iostream>
using namespace std;

int main() {
    bool found = false;
    int before_peak, peak, after_peak;
    cin >> before_peak >> peak >> after_peak;
    while (not found and after_peak != 0) {
        if(before_peak < peak and peak > 3143 and peak > after_peak) found = true;

        before_peak = peak;
        peak = after_peak;
        cin >> after_peak;
    }

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}