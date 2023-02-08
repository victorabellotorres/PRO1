/*
    Write a program that solves word searches! Words can be written horizontally (from
    left to right), vertically (from top to bottom) diagonally (from left to right and
    from top to bottom).
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<char> row;
typedef vector<vector<char>> Matrix;

void read_words(vector<string>& s) {
    int m = s.size();

    for (int i = 0; i < m; ++i) {
            cin >> s[i];
    }
}

void read_vector(row& c) {
    int m = c.size();
    
    for (int i = 0; i < m; ++i) {
        cin >> c[i];
    }
}

void read_matrix(Matrix& M) {
    int m = M.size();

    for (int i = 0; i < m; ++i) {
        read_vector(M[i]);
    }
}

void print_matrix(const Matrix& M) {
    int m = M.size();
    int n = M[0].size();
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j != 0) cout << " ";
            cout << M[i][j];
        }
        cout << endl;
    }
}


void toUpperCase(Matrix& M, const string& word, int i, int j, int vertical, int horizontal) {
    int word_size = word.size();

    for (int k = 0; k < word_size; ++k) {
        if (M[i][j] >= 'a' and M[i][j] <= 'z') M[i][j] = (M[i][j] + 'A') - 'a';

        i += vertical;
        j += horizontal;
    }
}

// precondition: a Matrix, a word, a position(i,j) and a vertical and horizontal incrementer
//  postcondition: true if the word matched
void check_word(Matrix& M, const string& word, int i, int j, int vertical, int horizontal) {
    int rows = M.size();
    int columns = M[0].size();
    int word_size = word.size();

    int matched_letters = 0; // although the first letter always match, this function ingores it to avoid the special case when word.size()=1
    bool word_possibly_match = true;
    bool found = false;

    while(word_possibly_match and not found and i < rows and j < columns) {
        if (M[i][j] == word[matched_letters] or (M[i][j] + 'a' - 'A') == word[matched_letters]) ++matched_letters;
        else word_possibly_match = false;

        found = matched_letters == word_size;
        if (found) toUpperCase(M, word, i - (vertical*(word_size - 1)), j - (horizontal*(word_size - 1)), vertical, horizontal);
        i += vertical;
        j += horizontal;
    }
}

Matrix search_words(const Matrix& M, const vector<string>& s) {
    int rows = M.size();
    int columns = M[0].size();
    int list_size = s.size();

    Matrix words_found = M;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            for (int k = 0; k < list_size; ++k) {

                if (M[i][j] == s[k][0]) {
                    // word matches horizontally
                    check_word(words_found, s[k], i, j, 0, 1);
                    // word matches vertically
                    check_word(words_found, s[k], i, j, 1, 0);
                    // word matches diagonally
                    check_word(words_found, s[k], i, j, 1, 1);
                        
                }
            }
        }
    }

    return words_found;
}

int main() {
    int x, m, n;
    bool first = true;
    while (cin >> x >> m >> n) {

        vector<string> word_list(x, "");        
        read_words(word_list);

        Matrix words_matrix(m, row(n));
        read_matrix(words_matrix);

        Matrix words_found = search_words(words_matrix, word_list);

        if (not first) cout << endl;
        else first = false;

        print_matrix(words_found);
    }
}