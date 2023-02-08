#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Matrix;

Matrix read_matrix(int r, int c) {
    Matrix M(r, vector<char>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> M[i][j];
        }
    }
    return M;
}

void search_diagonal(const Matrix& board, int i, int j, int x_incr, int y_incr) {
    int r = board.size();
    int c = board[0].size();
    int x = j + x_incr;
    int y = i + y_incr;

    bool found = false;
    while (not found) {
        if (x >= 0 and x < c) {
            if (y >= 0 and y < r) {
                if (board[y][x] == 'X') {
                    cout << "(" << i + 1 << "," << j + 1 << ")<->(" << y + 1 << "," << x + 1 << ")" << endl;
                    found = true;
                }
            }
            else found = true;
        }
        else found = true;

        x += x_incr;
        y += y_incr;
    }
}

void threatening_bishops(const Matrix& board) {
    int r = board.size();
    int c = board[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (board[i][j] == 'X') {
                search_diagonal(board, i, j, 1, 1);
                search_diagonal(board, i, j, -1, 1);
                search_diagonal(board, i, j, 1, -1);
                search_diagonal(board, i, j, -1, -1);
            }
        }
    }
}

int main() {
    int r, c;
    cin >> r >> c;

    Matrix Board = read_matrix(r, c);

    threatening_bishops(Board);
}