/*
    Given a sequence of words, print the length of the longest consecutive subsequence that only contains the
    first word. That is, if the sequence is s1, …, sn, print: max{j − i + 1 : 1 ≤ i ≤ j ≤ n ∧ si = si+1 = … = sj−1 = sj = s1 } .

    Input consists of a non-empty sequence of words.

    Print the number of words of the longest consecutive subsequence that only contains the first word.
*/
#include <iostream>
using namespace std;

int main() {
    int longest_sequence = 1;
    int current_sequence = 1;
    string first_word;
    cin >> first_word;

    string word;
    while (cin >> word) {
        if (first_word == word) ++current_sequence;
        else current_sequence = 0;

        if (current_sequence > longest_sequence){
            longest_sequence = current_sequence;
        }
    }
    cout << longest_sequence << endl;
}