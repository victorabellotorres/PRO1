/*
    Write a program that reads a number n and a sequence of n or more words, and prints the n last words in reverse order.
*/
#include <iostream>
using namespace std;

void read_words(int& n) {
    string s;
    
    if (cin >> s) {
        read_words(n);
        if(n-- > 0)
        cout << s << endl;
    }
}

int main() {
    int n;
    cin >> n;
    read_words(n);
}