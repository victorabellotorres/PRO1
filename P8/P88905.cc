/*
    Write a function that, given two matrices a and b, computes their product.
*/
#include <vector>
#include <iostream>
using namespace std;


typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& A, const Matrix& B) {
    int r = A.size();
    int c = B[0].size();
    Matrix product(r, vector<int>(c));


    int p = A[0].size();
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {

            int sum = 0;
            for (int k = 0; k < p; ++k) {
                sum += A[i][k]*B[k][j];
            }
            product[i][j] = sum;
        }
    }
    return product;
}

