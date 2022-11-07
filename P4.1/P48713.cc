/*
    Write a program that reads a sequence of natural numbers and, for each one, tells
    if it is a prime number or not. Remember that a natural number is prime if and only if it
    is greater than 1 and it does not have any positive divisor other than 1 and itself.

    Input consists of a number n, followed by n natural numbers.

    For every given natural number, tell in a line if it is prime or not,
    following the format of the example.

    For every given n, at most about √n  steps are needed to know if it is prime or not.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        bool is_prime = true;
        
        if (num < 2) is_prime = false;
        int j = 2;
        while (is_prime and j*j <= num) {
            if (num%j == 0) is_prime = false;
            ++j;
        }
    cout << num << " is ";
    if(not is_prime) cout << "not prime" << endl;
    else cout << "prime" << endl;
    }
}