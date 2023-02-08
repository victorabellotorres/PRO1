/*
    Write a procedure that transposes a square matrix m.
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

void swap(int& a, int& b) {
    int aux = a;

    a = b;
    b = aux;
}

// precondition: an square matrix
//  postcondition: a transposed matrix
void transpose(Matrix& M) {
    int m = M.size();

    for (int i = 0; i < m; ++i) {
        for (int j = i + 1; j < m; ++j) swap(M[j][i],M[i][j]);
    }
}

/*
int main()
{
    int n;
    while (cin >> n) {
        vector<vector<int>> M(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> M[i][j];
            }
        }
        transpose(M);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
*/