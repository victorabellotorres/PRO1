/*
    Write a function that, given a natural number x, returns the reduction of its digits.
*/
#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    if (n < 10) return n;
    else return n%10 + sum_of_digits(n/10);
}

int reduction_of_digits(int n) {
    if (sum_of_digits(n) < 10) return sum_of_digits(n);
    else return reduction_of_digits(sum_of_digits(n));
}

int main() {
  int n;
  while (cin >> n) {
    cout << reduction_of_digits(n) << endl;
  }
}