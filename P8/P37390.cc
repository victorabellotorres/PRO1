/*
    Write a function that, given two square matrices a and b, computes their product.
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

// precondition: A and B are square matrices n*n with n >= 0
// postconditon: returns A*B
Matrix product(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix product(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                product[i][j] += (A[i][k]*B[k][j]);
            }
        }
    }
    return product;
}

int main()
{
    int n;
    while (cin >> n) {
        Matrix A(n, vector<int>(n));
        Matrix B(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> B[i][j];
            }
        }
        Matrix C = product(A, B);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
