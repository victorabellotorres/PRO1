/*
    Write a program that, given a sequence of words, prints the number of words between the word “beginning” and the word “end”.
    If the word “beginning”, the word “end” or both words are missing, or if they appear in inverse order, tell so.

    Input consists of several words. The words “beginning” and “end” appear, at most, once.

    Print the number of words between the word “beginning” and the word “end”, if these appear in this order. Otherwise, print “wrong sequence”.
*/
#include <iostream>
using namespace std;

int main() {
    int counted_words = 0;
    bool counting = false;

    string word;
    while (cin >> word and word != "end") {
        if (counting == true) ++counted_words;
        else if (word == "beginning") counting = true;
    }
    if (counting == false or word != "end") cout << "wrong sequence" << endl;
    else cout << counted_words << endl;
}