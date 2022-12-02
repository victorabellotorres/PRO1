/*
    Function that indicates whether a number is a palidnromic number or not
*/
#include <iostream>
using namespace std;


int reversed_number(int n) {
    // Save the number in reverse order+
    int n_reverse = 0;
    while (n > 0) {
        n_reverse *= 10;
        n_reverse += n%10;
        n /= 10;
    }
    return n_reverse;
}

// Precondition:
//      n is a natural number
// Postcondition:
//      true if n is palindrome, false if it is not
bool is_palindromic(int n) {
    return n == reversed_number(n);
}


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}
