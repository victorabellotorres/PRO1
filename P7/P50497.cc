/*
    Write a function that tells if s is a palindrome or not. Remember that a word
    is a palindrome if it reads the same from left to right than from right to left.
    In this exercise, s can be rather large; this is why it is passed by reference.
*/
#include <iostream>
#include <string>
using namespace std;


bool is_palindrome(const string& s) {
    int m = s.size();
    for (int i = 0; i < m/2; ++i) {
        if (s[i] != s[(m - 1) - i]) return false;
    }
    return true;
}

int main() {
    string s;

    cin >> s;

    cout << is_palindrome(s) << endl;
}