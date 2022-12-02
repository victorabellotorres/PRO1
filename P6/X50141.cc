/*
    In this problem, given any natural number x with n digits x1 … xn, we say that y = y1 … yn is the result
    of fattening x if, for every i between 1 and n, yi = max{x1, …, xi}. For instance, if we fatten 7 we get 7,
    if we fatten 32064781 we get 33366788, and if we fatten 9000000 we get 9999999.
*/
#include <iostream>
using namespace std;

int max(int x, int y) {
    if (x > y) return x;
    return y;
}

int fatten(int x) {
    if (x < 10) return x;

    int y = fatten(x/10);
    return y*10 + max(y%10, x%10);
}

int main() {
    int x;
    while (cin >> x) {
        cout << fatten(x) << endl;
    }
}