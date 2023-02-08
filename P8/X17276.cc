/*
    Given a rectangular matrix n × m, and an initial position in the matrix,
    determine whether the four diagonals starting at the initial position have
    elements in strictly increasing order or not.
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

bool check_diagonal(const Matrix& M, int x, int y, int incr_x, int incr_y) {
    int rows = M.size();
    int columns = M[0].size();
    while (x + incr_x >= 0 and x + incr_x <= rows - 1 and y + incr_y >= 0 and y + incr_y <= columns - 1) {
        if (M[x][y] >= M[x + incr_x][y + incr_y]) return false;
        x += incr_x;
        y += incr_y;
    }
    return true;
}

bool increasing_diagonals(const Matrix& M, int x, int y) {
    //check diagonals
    return check_diagonal(M, x, y, 1, 1) and check_diagonal(M, x, y, -1, -1) and check_diagonal(M, x, y, 1, -1) and check_diagonal(M, x, y, -1, 1);
}

int main() {
    int r, c;

    while (cin >> r >> c) {
        Matrix M = read_matrix(r, c);

        int x, y;
        cin >> x >> y;
        
        if (increasing_diagonals(M, x, y)) cout << "yes" << endl;
        else cout << "no" << endl;
        
    }
}