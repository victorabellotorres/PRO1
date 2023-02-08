/*
    Write a program such that given a sequence of integers greater than zero,
    counts the number of sequence values satisfying two conditions,
    (1) they are less than all their predecessors and, (2) they are less than
    their immediate successor. Note that the first sequence element always satisfies first requirement. For simplicity, we agree that the last element of the sequence does not satisfy condition (2) and therefore has not to be counted.
*/
#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        int prev_num;//first num always stisfies first requirement
        cin >> prev_num;

        int count = 0;
        int min_num = prev_num + 1;
        int num;
        cin >> num;
        while (num != 0) {
            if(prev_num < min_num) {
                min_num = prev_num;
                if(prev_num < num) ++count;
            }
            prev_num = num;

            cin >> num;
        }
        cout << count << endl;
    }
}