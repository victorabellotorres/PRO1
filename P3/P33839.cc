/*
    Program that reads several numbers and prints the sum of the digits of each one.

    Input:  Sequence of natural numbers.

    Output: For every number, print the sum of its digits following the following format: "The sum of the digits of 29 is 11."
*/
#include <iostream>
using namespace std;

int main() {
    int n, sum;
    while (cin >> n) {
        sum = 0;
        cout << "The sum of the digits of " << n;
        while (n > 0){
            sum += n % 10;
            n /= 10;
        }
        cout << " is " << sum << '.' <<endl;
    }
}