/*
    Write a program that encrypts messages with the “Caesar cipher”, used by
    Julius Caesar to communicate with his generals. Given a constant k, each letter
    of the original message is replaced by the letter that is alphabetically k positions
    to its right (circularly, if needed). For instance, if k = 5, we must change ‘a’ by ‘f’,
    ‘b’ by ‘g’, …, ‘y’ by ‘d’, and ‘z’ by ‘e’.
*/
#include <iostream>
using namespace std;

const int ALPHABET_LETTERS = ('z' - 'a' + 1);

char encoded(char c, int k) {

    if (c >= 'a' and c <= 'z') {
        k %= ALPHABET_LETTERS;
        c = (c - 'a' + k)%ALPHABET_LETTERS;
        c += 'A';
    }
    else if (c == '_') return ' ';
    return c;
}

int main() {
    int n;
    
    while (cin >> n) {
        char c;
        cin >> c;
        while (c != '.') {
            cout << encoded(c, n);
            cin >> c;
        }
        
        cout << endl;
    }
}