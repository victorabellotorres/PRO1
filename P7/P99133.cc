/*
    Write a program that reads words, and prints them in reverse order,
    reversing also the order of the characters of each word.
*/
#include <iostream>
#include <string>
using namespace std;

void string_inversed_order(const string& s) {
    int m = s.size();

    for (int i = m - 1; i >= 0; --i) {
        cout << s[i];
    }
    if (m > 0)cout << endl;
}

void reversing_words(int n) {
    if (n > 1) {
        string s;
        cin >> s;

        reversing_words(n - 1);
        string_inversed_order(s);
    }
    else {
        string s;
        cin >> s;
        string_inversed_order(s);
    }
}

int main() {
    int n;
    cin >> n;
    reversing_words(n);
}