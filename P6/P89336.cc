/*
    Write a program that reads a sequence of words and prints, in reverse order, the first half of the list.
*/
#include <iostream>
using namespace std;

void read_words(int& n) {
    string s;
    
    if (cin >> s) {
        ++n;
        read_words(n);

        if (n-- < 0) cout << s << endl;
    }
    else {
        n = (n - 1)/2;
    }
}

int main() {
    int n = 0;
    read_words(n);
}