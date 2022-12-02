/*
    Given a sequence of words, we wish to know:
        1. Which is the average length L of its words.
        2. For every word with length L or longer, which is the most frequent letter
        (the smallest in lexicographic order in case of ties).
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// precondition: a vector of strings(whether defined or not)
// postcondition: a vector of strings defined with the inputted data
void read_words(vector<string>& s) {
    int m = s.size();

    for (int i = 0; i < m; ++i) {
        string word;
        cin >> word;
        s[i] = word;
    }
}

// precondition: a vector with size > 0
// postcondition: a vector with the average size of its elements
double vector_average_length(const vector<string>& s) {
    int m = s.size();
    double sum_of_lengths = 0;

    for (int i = 0; i < m; ++i) {
        sum_of_lengths += s[i].size();
    }

    return sum_of_lengths/m;
}

// precondition:
// postcondition:
char most_frequent_letter(const string& s) {
    const int LENGTH_ALPHABET = 'z' - 'a' + 1;
    vector<int> alphabet(LENGTH_ALPHABET, 0); 

    int m = s.size();
    for (int i = 0; i < m; ++i) {
        ++alphabet[int(s[i] - 'a')];
    }

    int max_repetitions = 0;
    char most_frequent_letter = ' ';
    for (int i = 0; i < LENGTH_ALPHABET; ++i) {
        if (alphabet[i] > max_repetitions) {
            max_repetitions = alphabet[i];
            most_frequent_letter = char(i + 'a');
        }
    }

    return most_frequent_letter;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;
    vector<string> s(n);
    read_words(s);

    double average_length = vector_average_length(s);
    cout << average_length << endl;

    for (int i = 0; i < n; ++i) {
        if (s[i].size() >= average_length) {
            cout << s[i] << ": " << most_frequent_letter(s[i]) << endl;
        }
    }
}