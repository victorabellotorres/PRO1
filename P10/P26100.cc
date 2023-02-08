#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<bool>> Matrix;

Matrix read_matrix(int r, int c) {
    Matrix M(r, vector<bool>(c));
    for (int i = 0; i < r; ++i) {
        char ch;
        for (int j = 0; j < c; ++j) {
            cin >> ch;
            M[i][j] = (ch == 'B');
        };
    }

    return M;
}

int max(int x, int y) {
    if (x > y) return x;
    else return y;
}

int min(int x, int y) {
    if (x < y) return x;
    else return y;
}


bool next_box_state(const Matrix& M, int i, int j) {
    int r = M.size();
    int c = M[0].size();
    int count = 0;

    //fila de arriba
    if (i > 0) {
        int start = max(j - 1, 0);
        int end = min(j + 1, c - 1);
        for (int k = start; k <= end; ++k) {
            if (M[i - 1][k]) ++count;
        }
    }
    if (i < r - 1) {
        int start = max(j - 1, 0);
        int end = min(j + 1, c - 1);
        for (int k = start; k <= end; ++k) {
            if (M[i + 1][k]) ++count;
        }
    }
    if (j > 0) {
        if (M[i][j - 1]) ++count;
    }
    if (j < c - 1) {
        if (M[i][j + 1]) ++count;
    }

    if ((M[i][j] and count == 2) or (count == 3)) return true;
    return false;
}

Matrix next_matrix(const Matrix& M) {
    int r = M.size();
    int c = M[0].size();
    Matrix next = M;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            next[i][j] = next_box_state(M, i, j);
        }
    }

    return next;
}

void print_matrix(const Matrix& M) {
    int r = M.size();
    int c = M[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (M[i][j]) cout << "B";
            else cout << ".";
        };
        cout << endl;
    }
}

int main() {
    int r, c;
    cin >> r >> c;
    bool first = true;
    while (r != 0 and c != 0) {
        if (first) first = false;
        else cout << endl; 
        Matrix matrix = read_matrix(r, c);

        matrix = next_matrix(matrix);

        print_matrix(matrix);

        cin >> r >> c;
    }
}