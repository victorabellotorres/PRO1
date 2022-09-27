/*
    You have saved n euros. Additionally, every Monday of the
    next t weeks, you will be given a weekly allowance of
    a1, a2, ..., at euros, respectively. Every week, you have a
    fixed amount of expenses that sums up to d euros.

    Program that counts how many weeks you end up with a strictly positive balance.
*/

#include <iostream>
using namespace std;

int main() {
    int d,n,t,a;
    int count = 0;
    cin >> d >> n >> t;
    for(int i = 0; i < t; i++) {
        cin >> a;
        n += a - d;
        if (n > 0) count++;
    }
    cout << count << endl;
}