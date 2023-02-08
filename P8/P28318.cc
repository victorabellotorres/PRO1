/*
    Write a program that reads a matrix, and afterwards prints the
    rows, the columns and the elements that are asked for.
*/
#include <iostream>
#include <vector>
using namespace std;

void read_vector(vector<int>& v) {
    int m = v.size();

    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }
}

vector< vector<int> > read_matrix(int rows, int columns) {
    vector< vector<int> > matrix(rows, vector<int>(columns));

    for (int i = 0; i < rows; ++i) {
        read_vector(matrix[i]);
    }

    return matrix;
}

void print_row(const vector< vector<int> >& matrix, int r) {
    int m = matrix[r - 1].size();

    for (int i = 0; i < m; ++i) {
        cout << " " << matrix[r - 1][i];
    }
}

void print_column(const vector< vector<int> >& matrix, int c) {
    int m = matrix.size();

    for (int i = 0; i < m; ++i) {
        cout << " " << matrix[i][c - 1];
    }
}

void matrix_print(const vector< vector<int> >& matrix, const string& s) {
    if (s == "element") {
        int r, c;
        cin >> r >> c;
        cout << s << " " << r << " " << c << ": " << matrix[r - 1][c - 1];
    }
    else {
        int x;
        cin >> x;
        
        cout << s << " " << x << ":";
        if (s == "row") print_row(matrix, x);
        else print_column(matrix, x);
    }
    cout << endl;
}

int main() {
    int rows, columns;
    cin >> rows >> columns;

    vector< vector<int> > matrix = read_matrix(rows, columns);

    string s;
    while (cin >> s) {
        matrix_print(matrix, s);
    }
}