/*
    A number is circular if its first digit matches the last one. For example, number 3493 is circular.
    Write a program that, given a list of numbers, prints the circular ones and, at the end, its quantity.

    A list of non-negative integers. Right after the list the mark -1 comes out. The mark does not belong to the list.

    The list of circular numbers followed by its size. Each number will be written on one line, as shown in the example.
*/
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int number;

    while (cin >> number) {
        int aux_number = number;
        int first_digit = 0;
        int last_digit = aux_number%10;

        while (aux_number > 0) {
            first_digit = aux_number%10;
            aux_number /= 10;
        }
        
        if (first_digit == last_digit) {
            cout << number << endl;
            ++count;
        }
    }
    cout << "total: " << count << endl;
}