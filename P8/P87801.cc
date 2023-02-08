/*
    Consider an r × c board where each cell has a letter and a number that indicates
    çthe value of that cell. Given several words w, compute the maximum number of
    points achievable by placing w horizontally (to the right) or vertically (down), 
    so that all the letters match those of the board.Consider an r × c board where each 
    cell has a letter and a number that indicates the value of that cell. Given several
    words w, compute the maximum number of points achievable by placing w horizontally 
    (to the right) or vertically (down), so that all the letters match those of the board.
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix_nums;
typedef vector<vector<char>> Matrix_letters;

void read_int_matrix(Matrix_nums& v) {
    int r = v.size();
    int c = v[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> v[i][j];
        }
    }
}

void read_char_matrix(Matrix_letters& ch) {
    int r = ch.size();
    int c = ch[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> ch[i][j];
        }
    }
}

int check_word_score(const Matrix_letters& letters,const Matrix_nums& points, const string& word, int i, int j, int vertical, int horizontal) {
    int rows = letters.size();
    int columns = letters[0].size();
    int word_size = word.size();
    int score = 0;

    int matched_letters = 0; // reinitziem les lletes mathced per evitar problemes quan word.size()=1
    bool word_possibly_match = true;
    bool found = false;

    while(word_possibly_match and not found and i < rows and j < columns) {
        if (letters[i][j] == word[matched_letters]) {
            score += points[i][j];
            ++matched_letters;
        }
        else word_possibly_match = false;

        found = matched_letters == word_size;
        if (found) return score;
        i += vertical;
        j += horizontal;
    }
    return -1;
}

int max_score_placing(const Matrix_letters& letters, const Matrix_nums& points, const string& word) {
    int r = letters.size();
    int c = letters[0].size();
    int max_score = -1;
    int aux_score;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            
            if (letters[i][j] == word[0]) {
                // word matches horizontally
                aux_score = check_word_score(letters, points, word, i, j, 0, 1);
                if (max_score < aux_score) max_score = aux_score;

                // word matches vertically
                aux_score = check_word_score(letters, points, word, i, j, 1, 0);
                if (max_score < aux_score) max_score = aux_score;
            }
        }
    }
    return max_score;
}

int main() {
    int r, c;

    while (cin >> r >> c) {
        Matrix_letters letters(r, vector<char>(c));
        read_char_matrix(letters);
        Matrix_nums points(r, vector<int>(c));
        read_int_matrix(points);

        int n;
        cin >> n;

        for (int i = 0; i < n; ++i) {
            string word;
            cin >> word;
            int score = max_score_placing(letters, points, word);

            if (score != -1) cout << score << endl;
            else cout << "no" << endl;
        }
    }
}
