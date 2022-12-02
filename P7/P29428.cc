/*
    Your task is to write a program that reads a sequence of words and prints,
    for each word, all the other words of the sequence contained in it.
*/
#include <iostream>
#include <vector>
#include <string>
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

// precondition: a vector of strings
// postcondition: print which other strings contain every string of the vector
void print_cointained_words(vector<string>& s) {
    int m = s.size();

    for (int i = 0; i < m; ++i) {
        string container_word = s[i];
        int container_size = container_word.size();

        cout << container_word << ":";
        for (int j = 0; j < m; ++j) {
            string word_to_check = s[j];
            int size_to_check = word_to_check.size();

            int  pos_to_check = 0;
            bool found = false;
            while (pos_to_check + size_to_check <= container_size and not found) {
                string aux_word;

                for (int z = 0; z < size_to_check; ++z) {
                    aux_word.push_back(container_word[z + pos_to_check]);
                }
                if (word_to_check == aux_word) {
                    cout << " " << word_to_check;
                    found = true;
                }

                ++pos_to_check;
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    read_words(words);

    print_cointained_words(words);
}