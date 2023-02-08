/*
    An integer greater than zero is two-three-balanced when it can be divided by two
    as many times as times can be divided by three. For instance, numbers 5 (zero times
    divisible by two and zero times divisible by three), 42 (once) and 396 (twice) are
    two-three-balanced. Write a recursive function is_two_three_balanced() that given
    an integer greater than zero n returns true when n is two-three-balanced and returns
    false otherwise.
*/
#include <iostream>
using namespace std;

//pre: n > 0
//post: returns true when n is two-three-balanced. Returns false otherwise 
bool is_two_three_balanced(int n) {
    if (n%6 == 0) return is_two_three_balanced(n/6);
    else if (n%2 != 0 and n%3 != 0) return true;
    else return false;
}


int main() {
    int n;
    while (cin >> n) {
        if (is_two_three_balanced(n)) cout << "yes";
        else cout << "no";
        cout << endl;
    }
}