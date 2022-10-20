/*
    Given a non-zero natural n, compute the sum of the digits in odd positions and the sum of the digits in even positions.
    If one of the two sums is a multiple of the other, your program has to print the relating factor.

    The input is a non-zero natural number 0 < n < 231.

    The output consists of two lines. The first line shows the sum of digits in odd positions and the sum of digits in even positions.
    The second line indicates the relationship among the two quantities, including the exact relation when one is a multiple of the other.

    Observation: Remember that the last digit of a natural number n occupies an odd position. For example, for n=212121, the odd positions
    are those occupied by 1’s and the even positions are those occupied by 2’s.
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int even_sum = 0;
    int odd_sum = 0;
    int count = 1;
    while (number > 0) {
        int last_digit = number%10;
        if (count%2 == 0) even_sum += last_digit;
        else odd_sum += last_digit;
        number /= 10;
        ++count;
    }
    cout << odd_sum << ' ' << even_sum << endl;

    if (even_sum == 0) cout << even_sum << " = 0 * " <<  odd_sum << endl;
    else if (odd_sum == 0) cout << odd_sum << " = 0 * " <<  even_sum << endl; 
    else if (even_sum%odd_sum == 0) cout << even_sum << " = " << even_sum/odd_sum << " * " << odd_sum << endl;
    else if (odd_sum%even_sum == 0) cout << odd_sum << " = " << odd_sum/even_sum << " * " << even_sum << endl;
    else cout << "nothing" << endl;
}