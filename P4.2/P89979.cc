/*
    Write a program that, given a sequence of lines with words, tells which is the last line that has the words in increasing (lexicographic) order.

    Input consists of a sequence of lines with words. Each line begins with a number n, followed by n words made up of only lowercase letters.

    Print the index of the first line with the words in (not necessary strictly) increasing order. If there is no such line, tell so. Follow the format of the examples.
*/
#include <iostream>
using namespace std;

int main() {
    int line = 0;
    int line_found = 0;
    bool found = false;
    bool line_in_increasing_order = false;
    int n;
    while (cin >> n) {
        ++line;
        string prev_word = "a";
        line_in_increasing_order = true;
        for (int i = n; i > 0; --i) {
            string word;
            cin >> word;
            if (word < prev_word) {
                line_in_increasing_order= false;
            }
            else prev_word = word;
        }
        if (line_in_increasing_order) {
                line_found = line;
                found = true;
        }
    }
    if (not found) cout << "There is no line in increasing order." << endl;
    else cout << "The last line in increasing order is " << line_found << "." << endl;
}