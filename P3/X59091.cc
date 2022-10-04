/*
    Write a program that prints n*m rectangles. Print each rectangle in an independent way, fill it up with 9, followed by 8, …followed by 0, etc.

    The input consists of several pairs of natural numbers.

    For every pair (n,m), print a rectangle of size n × m filled with 9,8,…0, 9, …. Separate two rectangles with an empty line.
*/
#include <iostream>
using namespace std;

int main() {
    int rows,columns,count;
    bool endline = false;
    while (cin >> rows >> columns) {
        if (endline) cout << endl;
        endline = true;
        count = 9;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j){
                if (count < 0) count = 9;
                cout << count;
                --count;
            }
            cout << endl;
        }
    }

}
