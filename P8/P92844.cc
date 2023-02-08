#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Rectangle;

bool found_in_col(char c, int col, const Rectangle& r) {
    int n = r.size();
    for(int i = 0; i < n; ++i) {
        if (r[i][col] == c) return true;
    }
    return false;
}

bool found_in_row(char c, int row, const Rectangle& r) {
    int n = r[0].size();
    for(int i = 0; i < n; ++i) {
        if (r[row][i] == c) return true;
    }
    return false;
}

void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols) {
    int first_col = 0;
    while (not found_in_col(c, first_col, r)) ++first_col;

    int last_col = r[0].size() - 1;
    while (not found_in_col(c, last_col, r)) --last_col;

    int first_row = 0;
    while (not found_in_row(c, first_row, r)) ++first_row;

    int last_row = r.size() - 1;
    while (not found_in_row(c, last_row, r)) --last_row;

    cols = last_col - first_col + 1;
    rows = last_row - first_row + 1;
}

/*
Rectangle read(int n, int m) {
    Rectangle R(n, Row(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> R[i][j];
    }
    return R;
}
*/

int main(){ 
  int n, m;
  while (cin >> n >> m) {
    Rectangle r(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) cin >> r[i][j];

    int t;
    cin >> t;
    while (t--) {
      char c;
      cin >> c;
      int rows, cols;
      minimal_dimensions(c, r, rows, cols);
      cout << rows << " " << cols << endl;
    }
  }
}