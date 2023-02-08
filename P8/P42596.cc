/*
    Your task is to write a program that reads a sequence of matrices of integers,
    and prints which of them has the maximum difference between its greatest element
    and the smallest element. In case of a tie, you must choose the matrix that appeared
    before in the sequence.
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

Matrix read_matrix(int rows, int columns) {
    Matrix M(rows,  vector<int>(columns));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cin >> M[i][j];
        }
    }
    return M;
}

void min_max(const Matrix& mat, int& minimum, int& maximum) {
    int rows = mat.size();
    int columns = mat[0].size();
    maximum = mat[0][0];
    minimum = mat[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {

            if (mat[i][j] > maximum) maximum = mat[i][j];
            else if (mat[i][j] < minimum) minimum = mat[i][j];
        }
    }
}

int main() {
    int rows, columns;
    int matrix_num = 1;
    int max_diff = 0;
    int matrix_max_diff = 1;

    while (cin >> rows >> columns) {
        Matrix M = read_matrix(rows, columns);
        int min, max;
        min_max(M, min, max);

        int diff = max - min;
        if (diff > max_diff) {
            max_diff = diff;
            matrix_max_diff = matrix_num;
        }
        ++matrix_num;
    }

    cout << "la diferencia maxima es " << max_diff << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << matrix_max_diff << endl; 
}