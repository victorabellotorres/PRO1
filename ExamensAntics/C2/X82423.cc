/*
    In a sequence of numbers, a chain is a list of values in the sequence that appear
    in consecutive positions. Write a program that determines the starting position
    and length of the longest chain with all its values being the same.
*/
#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        int max_length = 0;
        int max_pos = 1;
        int pos = 1;

        int num;
        cin >> num;
        int length = 1;
        int prev_num = num;
        cin >> num;
        while (num != -1) {
            if (num == prev_num) ++length;
            else {
                if (length > max_length) {
                    max_length = length;
                    max_pos = pos - (length - 1);
                }
                length = 1;
            }

            ++pos;
            prev_num = num;
            cin >> num;
        }

        if (length > max_length) {
                    max_length = length;
                    max_pos = pos - (length - 1);
                }

        cout << max_pos << " " << max_length << endl;
    }
}