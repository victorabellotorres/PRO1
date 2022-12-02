/*
    In this problem, we say that two sequences of numbers are similar if both have the same sum and
    finalize with the same number. Provide a program that computes how many of the given sequences are
    similar to the first (this one included).

    The input is formed by one or more non-empty sequences of natural numbers all of them strictly positive.
    Each sequence is finalized by a 0. The end of the input is marked with an empty sequence.

*/
#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    sum = 0;
    int num;
    cin >> num;

    while (num != 0) {
        sum += num;
        last = num;
        cin >> num;
    }
}

int main() {
    int first_seq_last, first_seq_sum, sum, last;

    info_sequence(first_seq_sum, first_seq_last);
    int count = 1;

    sum = 1, last = first_seq_last;
    while (sum != 0) {
        info_sequence(sum, last);
        if (sum == first_seq_sum and last == first_seq_last) ++count;
    }
    
    cout << count << endl;
}