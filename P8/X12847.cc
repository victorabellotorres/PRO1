/*
    Battleship (also Battleships or Sea Battle) is a guessing game for two players. It is known worldwide as a pencil
    and paper game which dates from World War I. The game takes place on a 10x10 board where the rows are numbered with
    letters (from a to j), and the columns are numbered with numbers from 1 to 10.
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Matrix;

void place_boat(Matrix& board, int c, int n, int length, int pos) {
    c -= 'a';
    --n;
    
    while (length > 0) {
        board[c][n] = 'X';

        if (pos == 'h') ++n;
        else ++c;

        --length;
    }
}

// Prints a 10x10 board
void print_board(const Matrix& board) {

    cout << "  ";
    for (int i = -1; i < 10; ++i) {
        // print rows cordinates
        if (i >= 0) cout << char('a' + i) << ' ';

        for (int j = 0; j < 10; ++j) {
            // print columns cordinates
            if (i != -1) cout << board[i][j];
            else cout << j + 1;
        }
        cout << endl;
    }
}

int closest_distance(const Matrix& board, int x, int y) {
    int incr = 1;
    bool left, right, up, down;


    while (incr < 10) {
        right = (x + incr < 10);
        left = (x - incr >= 0);
        up = (y + incr >= 0);
        down = (y - incr < 10);


        if (right and board[x + incr][y] == 'X') return incr;
        if (left and board[x - incr][y] == 'X') return incr;
        if (up and board[x][y + incr] == 'X') return incr;
        if (down and board[x][y - incr] == 'X') return incr;

        //diagonals
        if (left and up) {

            if (board[x - incr][y - incr] == 'X') return incr;
            for (int i = incr - 1; i > 0; --i) {
                if (board[x - (incr - i)][y - incr] == 'X') return incr;
                if (board[x - incr][y - (incr - i)] == 'X') return incr;
            }
        }
        if (right and up) {

            if (board[x + incr][y - incr] == 'X') return incr;
            for (int i = incr - 1; i > 0; --i) {
                if (board[x + (incr - i)][y - incr] == 'X') return incr;
                if (board[x + incr][y - (incr - i)] == 'X') return incr;
            }
        }
        if (right and down) {

            if (board[x + incr][y + incr] == 'X') return incr;
            for (int i = incr - 1; i > 0; --i) {
                if (board[x + (incr - i)][y + incr] == 'X') return incr;
                if (board[x + incr][y + (incr - i)] == 'X') return incr;
            }
        }
        if (left and down) {

            if (board[x - incr][y + incr] == 'X') return incr;
            for (int i = incr - 1; i > 0; --i) {
                if (board[x - (incr - i)][y + incr] == 'X') return incr;
                if (board[x - incr][y + (incr - i)] == 'X') return incr;
            }
        }

        ++incr;
    }
    return 10;
}

int main() {
    char c, pos;
    int n, length;

    Matrix board(10, vector<char>(10, '.'));

    for (int i = 0; i < 10; ++i) {
        cin >> c >> n >> length >> pos;

        place_boat(board, c, n, length, pos);
    }

    print_board(board);
    cout << endl;

    while (cin >> c >> n) {
        cout << c << n;
        if (board[c - 'a'][n - 1] == 'X') cout << " touched!";
        else cout << " water! closest ship at distance " << closest_distance(board, c - 'a', n - 1);

        cout << endl;
    }
}