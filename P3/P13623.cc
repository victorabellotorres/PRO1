/*
    Consider a chess board with r rows and c columns, where every square contains between 0 and 9 coins.
    Supose that the upper-left square is white. For instance, this is an empty board with four rows and five columns:
    Write a program such that, given a chess board, computes the total number of coins on its white squares.

    Input begins with the number of rows r and the number of columns c. Follow r lines, each one with c characters between ‘0’ and ‘9’.

    Print the total number of coins on the white squares of the board.
*/
#include <iostream>
using namespace std;

int main() {
    int r,c,sum = 0;
    cin >> r >> c;

    for (int i = 0; i < r; ++i) {
        bool is_white = i%2 == 0;
        for (int j = 0; j < c; ++j) {
            char x;
            cin >> x;
            if(is_white) sum += x - '0';
            is_white = not is_white;
        }
    }
    cout << sum << endl;
}