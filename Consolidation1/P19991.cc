/*
    Consider a square chess board with n rows and n columns, where every square contains between 0 and 9 coins.
    Write a program such that, given a chess board,computes the total number of coins on its two diagonals.

    Input begins with the size n of the board. Follow n lines, each one with n characters between ‘0’ and ‘9’.

    Print the total number of coins on the two diagonals of the board.
*/
#include <iostream>
using namespace std;

int main() {
    int board_size;
    cin >> board_size;

    int  sum = 0;
    for (int i = 0; i < board_size; ++i) { // iterate trough rows
        for (int j = 0; j < board_size; ++j) { // iterate through columns
            char coins;
            cin >> coins;

            int firstDiag_square = i;
            int secondDiag_square = board_size - (i + 1);

            if (j == firstDiag_square or j == secondDiag_square) {
                sum += int(coins - '0');
            }
        }
    }
    cout << sum << endl;
}