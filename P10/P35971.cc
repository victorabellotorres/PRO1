#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int y, x;
};

typedef vector<vector<int>> Matrix;

Matrix read_matrix(int r, int c) {
    Matrix M(r, vector<int>(c));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> M[i][j];
        }
    }

    return M;
}

int sum_of_values(const Matrix& M, const Point& p1, const Point& p2) {
    int sum = 0;
    if (p1.y == p2.y) {
        int d;
        if (p1.x - p2.x < 0) d = 1;
        else d = -1;

        for (int i = p1.x + d; i != p2.x + d; i += d) {
            sum += M[p1.y][i];
        }
    }
    else {
        int d;
        if (p1.y - p2.y < 0) d = 1;
        else d = -1;

        for (int i = p1.y + d; i != p2.y + d; i += d) {
            sum += M[i][p1.x];
        }
    }
    return sum;
}

int main() {
    int r, c;
    cin >> r >> c;

    Matrix matrix = read_matrix(r, c);

    Point p1;
    cin >> p1.y >> p1.x;
    int sum = matrix[p1.y][p1.x];
    
    Point p2;
    while (cin >> p2.y >> p2.x) {
        sum += sum_of_values(matrix, p1, p2);

        p1.y = p2.y;
        p1.x = p2.x;
    }

    cout << "suma = " << sum << endl;
}