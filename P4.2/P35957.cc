/*
    Anna and Bernard play the following game: First, they invent n numbers each. Later, and alternatively, Anna writes her first number,
    Bernard writes his first number, Anna writes her second number, Bernard writes his second number, and so on. The first to write a
    number such that its middle digit is not the same as the middle digit of the previous number, loses. (The first number, always Anna’s,
    may have any middle digit.) If someone writes a number with an even number of digits, he or she loses immedialty. If after writing the
    2n numbers nobody loses, the game ends in a draw.

    Input consists of a natural number n≥ 1, followed by 2n natural numbers a1, b1, …, an, bn: a1 is the first number of Anna, b1 is the
    first number of Bernard, a2 is the second number of Anna, etcetera.

    Print ‘A’, ‘B’, or ‘=’, depending on whether Anna wins, Bernard wins, or it is a tie.
*/
#include <iostream>
using namespace std;

int get_middle_digit(int num, bool &even_digits) {
    int aux_num = num/10;
    int count = 0;
    while (aux_num > 0) {
        aux_num /= 10;
        ++count;
    }
    if(count%2 != 0) even_digits = false;
    
    for (int i = count/2; i > 0; --i) num /= 10;
        
    return num%10;
}

int main() {
    int n;
    cin >> n;
    n *= 2;

    int num;
    cin >> num;
    bool even_digits = true;
    int prev_middle_digit = get_middle_digit(num, even_digits);
    int middle_digit = get_middle_digit(num, even_digits);

    while ((n > 0) and even_digits and (prev_middle_digit == middle_digit)) {
        --n;
        prev_middle_digit = middle_digit;
        cin >> num;
        middle_digit = get_middle_digit(num, even_digits);
    }
    if (n == 0) cout << "=" << endl;
    else if (n%2 == 0) cout << "B" << endl;
    else cout << "A" << endl;
}