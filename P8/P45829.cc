/*
    A rectangular field of size m× n contains mn square areas. Some of the areas are
    occupied by a determinated growing (tomatoes, carrots, etc.) that is identified by
    a natural number strictly positive. It is known that growings are grouped in
    different disjointed rectangles and that a growing always is separated of another
    one by areas without grownings, identify by the value 0.

    Write a program that reads fields and prints the number of rectangular growings.
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

void read_vector(vector<int>& v) {
    int m = v.size();

    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }
}

Matrix read_matrix(int rows, int columns) {
    Matrix matrix(rows, vector<int>(columns));

    for (int i = 0; i < rows; ++i) {
        read_vector(matrix[i]);
    }

    return matrix;
}

void set_field_to_zero(Matrix& M, int i, int j) {
    int r = M.size();
    int c = M[0].size();

    int width = 0;

    bool field_completed = false;
    while (i < r and not field_completed) {
        bool end = false;
        while (j + width < c and not end) {
            if (M[i][j + width] == 0) {
                if (width == 0) field_completed = true;
                end = true;
            }
            else {
                M[i][j + width] = 0;
                ++width;
            }
        }
        ++i;
        width = 0;
    }
}

int count_fields(Matrix& M) {
    int r = M.size();
    int c = M[0].size();
    int fields = 0;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (M[i][j] != 0) {
                set_field_to_zero(M, i, j);
                ++fields;
            }
        }
    }
    return fields;
}


int main() {
    int m, n;

    while (cin >> m >> n) {
        Matrix M = read_matrix(m, n);

        cout << count_fields(M) << endl;
    }
}