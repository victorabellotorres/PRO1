/*
    Given a non-negative integer n, compute the sum of the digits in the first and in the second halves of n.
    Your program must also indicate the order relationship among those quantities. This computation has to be
    done only when the number of digits of n is even.

    The first half of a number with l digits (for even l) is formed by the l/2 left digits and the second half is
    formed by the l/2 right digits. For example, the number 70724444, has first half 7072 and second half 4444.

    The input is a non-negative integer n with 0 ≤ n < 231.

    The sum of the digits of the first half and the sum of the digits of the second half together with their relationship,
    provided that the number of digits is even.
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    //count how many digits have number
    int count = 0;
    int buffer_number = number;
    while (buffer_number > 0) {
        buffer_number /= 10;
        ++count;
    }

    if (number == 0 or count%2 != 0) cout << "nothing" << endl;
    else {
        // sum the two parts
        int first_part = 0;
        int second_part = 0;
        for (int i = 0; i < count; ++i) {
            //first part
            if (i + 1 > count/2) {
                first_part += number%10;
            }
            else {
                second_part += number%10;
            }
            number /= 10;
        }

        cout << first_part;
        if (first_part > second_part) {
            cout << " > ";
        }
        else if (first_part < second_part) {
            cout << " < ";
        }
        else {
            cout << " = ";
        }  
        cout << second_part << endl;
    }
}

