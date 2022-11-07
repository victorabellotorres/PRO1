/*
    Write a program that reads sequences of integer numbers and prints the maximum value of each sequence.

    Input contains several sequences. Each sequence begins with its number of elements n > 0, followed by n integer numbers.

    Print the maximum of every sequence, one per line.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int max;
        cin >> max;
        for (int i = n - 1; i > 0; --n) { // i = n - 1 porque ya se ha guardado un valor de la secuencia (cin >> max)
            int num;
            cin >> num;
            if (num > max) max = num;
        }
        cout << max << endl;
    }

}