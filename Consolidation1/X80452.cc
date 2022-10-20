/*
    We want to send a postcard by mail. We need to stamp worth n cents. Stamps have values 7 and 4 cents.
    As space is limited we want to know the minimum number of stamps we need to put on the postcard, without losing a cent.

    The input is a sequence of integer numbers. Each number in the sequence is greater than 19.

    For each integer n in the input, a line with two numbers p ≥ 0 and q ≥ 0 such that n = 7p + 4q and p+q is minimum among all possible choices.
*/
#include <iostream>
using namespace std;

int main() {
    int cents;
    while(cin >> cents) {
        int p = cents/7 + 1;//stamp of 7 cents
        int q = 0;// stamps of 4 cents
        while((7*p + 4*q) != cents) {
            --p;
            q = (cents - 7*p)/4;
        }
        cout << p << ' ' << q << endl;
    }
}