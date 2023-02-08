/*
    Each punctuation mark, blank character and line break of a text has been
    replaced by character #, and the result has been dumped into a sequence
    of characters. Write a program that given this sequence counts the number
    of words in the text not having any letter ’a’.
*/
#include <iostream>
using namespace std;

int main() {
    char c;
    int count = 0;
    bool a_found = false;
    bool word_exists = false;
    while (cin >> c) {
        if (c == '$') {
            if (not a_found and word_exists) ++count;
            a_found = 0;

            cout << count << endl;
            count = 0;
        }
        else if (c == '#' and word_exists) {
            if (not a_found) ++count;
            a_found = false;
        }
        else if (c >= 'a' and c <= 'z') {
            
            if (c == 'a') a_found = true;
        }
        word_exists = c != '$' and c != '#';
    }
}