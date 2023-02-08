/*
    Two non-negative integers n and m are complementary if (n + m) % 10 equals 0. Write a program that, 
    given a non-negative integer n and a sequence of non-negative integers that ends with -1, outputs the
    first element in the sequence that is complementary to n, along with its position. If that element does
    not exist, the program outputs an informative message.

    The input starts with a non-negative integer n followed by a sequence of non-negative integers that ends with -1.

    The output is the first element in the sequence that is complementary to n, along with its position 
    (if it exists), or the string "No existe" (otherwise). The first element in the sequence is at position 1,
    the second is at position 2, and so on.
*/
#include <iostream>
using namespace std;

int main() {
    bool found = false;
    int count = 0;
    int n, m, value;
    cin >> n;

    cin >> m;
    while (m >= 0 and not found) {
        ++count;
        found = ((n+m)%10 == 0);
        value = m;
        cin >> m;
    }
    if (not found) cout << "No existe" << endl;
    else cout << value << ": " << count << endl;
}