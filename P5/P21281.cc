/*
    Write a procedure to store in f the most frequent factor of n, and store in q how many
    times it appears. If there is a tie, choose the smallest factor.For instance, if called
    with n = 450 = 2¹ · 3² · 5², the values after the call must be f =3 and q = 2.
*/
#include <iostream>
using namespace std;

// Precongition: n >= 2
// Postcondition: f = most frequent factor, n = how many times it appears

void factor(int n, int& f, int& q) {
    f = n;
    q = 0;

    for (int i = 2; i*i <= n; ++i) {
        int current_frequency_factor = 0;
        
        while (n%i == 0) {
            ++current_frequency_factor;
            n /= i;
        }

        if (current_frequency_factor > q) {
            q = current_frequency_factor;
            f = i;
        }
    }

    if (q == 0) q = 1;
}


int main() {
    int n;
    while (cin >> n) {
        int f = -1, q = 1000;
        factor(n, f, q);
        cout << f << ' ' << q << endl;
    }
}
