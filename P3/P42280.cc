/*
    Consider a chess board with r rows and c columns, where every square contains between 0 and 9 coins.
    Write a program such that, given a chess board, computes the total number of coins on it.

    Input begins with the number of rows r and the number of columns c. Follow r lines, each one with c characters between ‘0’ and ‘9’.

    Print the total number of coins on the board.
*/
#include <iostream>
using namespace std;

int main() {
    int r,c,sum = 0;
    char n;
    cin >> r >> c;
    for (int i = 0; i < c*r; i++) {
            cin >> n;
            sum += int(n - '0');
    }
    cout << sum << endl;
}

