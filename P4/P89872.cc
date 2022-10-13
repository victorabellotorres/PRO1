/*
    Write a program that prints the second largest word, in alphabetical order, of a given a sequence of words, ignoring repetitions.
    For instance, if the words are “hola”, “adeu”, “hola”, “hi” and “bye”, then the asked word is “hi”, because it is not relevant that “hola” appears more than once.

    Input consists of several words, all made up of only lowercase letters. There will always be at least two different words.

    Print the second largest word in alphabetical order, ignoring repetitions.
*/
#include <iostream>
using namespace std;

int main() {
    string largest_word;
    string second_largest_word;

    string word;
    cin >> word;
    largest_word = word;

    while (cin >> word) {
        bool word_is_equal = (word == largest_word);
        if (word > largest_word and word_is_equal == false) {
            second_largest_word = largest_word;
            largest_word = word;

        }
        else if (word > second_largest_word and word_is_equal == false) {
            second_largest_word = word;
        }
    }
    cout << second_largest_word << endl;
}