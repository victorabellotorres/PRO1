/*
    Remember that a Sudoku is a game that consists of completing a 9 × 9 grid with
    numbers between 1 and 9, so that the final result has not repeated numbers in
    the same row, column or 3 × 3 submatrix. For example, this is a Sudoku and its
    solution:
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

const int SOLUTION = 362880; // 1*2*3...*9 = 362880

Matrix read_sudoku() {
    Matrix M(9, vector<int>(9));

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) cin >> M[i][j];
    }

    return M;
}

bool solution_sudoku(const Matrix& sudoku) {

    int square = 1;
    for(int i = 0; i < 9; ++i) {
        int line = 1;
        int column = 1;
        for (int j = 0; j < 9; ++j) {
            
            if (i%3 == 0) {
                for (int k = 0; k < 3; ++k) square *= sudoku[i + k][j];
                if ((j+1)%3 == 0) {
                    if (square != SOLUTION) return false;
                    square = 1;
                }
            }

            line *= sudoku[i][j];
            column *= sudoku[j][i];

        } 
        if (line != SOLUTION or column != SOLUTION) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Matrix sudoku = read_sudoku();
        if (solution_sudoku(sudoku)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}