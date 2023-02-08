#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<vector<char>> Matrix_ch;

int pow(int base, int exponente) {
    int result = 1;
    for (int i = 0; i < exponente; ++i) {
        result *= base;
    }
    return result;
}

// prints a square matrix with this character '|' in every start and end of a line
void print_matrix(const Matrix_ch& M) {
    int m = M.size();

    for (int i = 0; i < m; ++i) {
        cout << '|';
        for (int j = 0; j < m; ++j) {
            cout << M[i][j];
        }
        cout << '|' << endl;
    }
}

Matrix_ch create_cross(int n) {
    int size = pow(3, n);
    Matrix_ch cross(size, vector<char>(size, ' '));

    if (n == 1) {
        for (int i = 0; i < size; ++i) {
            if (i == 1) {
                cross[i][0] = cross[i][2] = '-';
                cross[i][1] = 'O';
            }
            else {
                cross[i][1]  ='|';
            }
        }
        
        return cross;
    }
    else {
        Matrix_ch prev_cross = create_cross(n - 1);
        int prev_size = prev_cross.size();

        int third_size = size/3;
        for (int i = 0; i < size; ++i) {

            if (i >= size/3 and i < (size/3)*2) {

                for (int j = 0; j < size; ++j) {
                    cross[i][j] = prev_cross[i - third_size][j%prev_size];
                }
            }
            else {
                for (int j = third_size; j < (2*third_size); ++j) {
                    cross[i][j] = prev_cross[i%third_size][j%prev_size];
                }
            }
        }

        return cross;
    }
}

int main() {
    int n; 
    cin >> n;

    Matrix_ch cross = create_cross(n);

    print_matrix(cross);
}