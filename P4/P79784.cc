/*
    Write a program that reads a sequence of characters, each one codifying a movement (‘n’ for north, ‘s’ for south, ‘e’ for east, and ‘w’ for west),
    and that computes the final position of an object initially located at (0, 0). Suppose that the first component corresponds to the east-west direction,
    that going est means adding 1 to that component, and that going south means adding 1 to the second component.

    Input consists of a sequence of characters ‘n’, ‘s’, ‘e’, or ‘w’.

    Print the final position of an object initially located at (0, 0).
*/
#include <iostream>
using namespace std;

int main() {
    char character;
    int south_dir = 0;
    int east_dir = 0;

    while (cin >> character) {
        if (character == 's') ++south_dir;
        else if (character == 'n') --south_dir;
        else if (character == 'e') ++east_dir;
        else --east_dir;
    }
    cout << '(' << east_dir << ", " << south_dir << ')' << endl;
}