/*
    Write a program that treats a sequence of integers greater than zero.
    For each number, the program outputs the value that results from eliminating
    its 0 digits. For example, eliminating 0 digits from 3097601 results in 39761.
*/
#include <iostream>
using namespace std;

// Pre: x > 0
// Post: returns the value of x without 0 digits
int remove_zeros(int x) {
    if (x == 0) return 0;
    else if (x%10 != 0) return x%10 + remove_zeros(x/10)*10;
    else return remove_zeros(x/10);
}

int main() {
    int n;
    while (cin >> n) {
        cout << remove_zeros(n) << endl;
    }
}