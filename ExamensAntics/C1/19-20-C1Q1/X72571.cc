/*
    Consider a chess board with r rows and c columns, where every square contains a number of coins ranging
    from 0 up to 9. We number the rows from 1 to r starting from the top row. Write a program such that, given
    a chess board, computes the total number of coins it contains and the number of coins placed in odd rows.

    Input begins with two integers greater than zero that represent the number of rows r and columns c of the
    board, respectively. Then, it follows r lines, each one with c characters ranging from ‘0’ to ‘9’.

    The total number of coins on the board and the number of coins placed in odd rows.
*/
#include <iostream>
using namespace std;

int main() {
    int total_sum = 0;
    int odd_sum = 0;

    int rows, columns;
    cin >> rows >> columns;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            char coins;
            cin >> coins;
            total_sum += int(coins - '0');
            if (i%2 == 0) odd_sum += int(coins - '0');  // i = 0 equival fila numero 1(senar), i = 2 fila numero 3(senar)...
        }
    }
    
    cout << total_sum << " " << odd_sum << endl;
}