/*
    Write a program that reads non-empty sequences of real numbers and,
    for each sequence, prints its minimum, its maximum and its average.

    Input consists of a natural number n, followed by n sequences. Each
    sequence begins with the number of elements m > 0, followed by m real
    numbers.

    For every sequence, print in a line and with four digits after the
    decimal point its minimum, its maximum and its average.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        double sum = 0;
        double max_value, min_value;
        
        int m;
        cin >> m;
        double x;
        cin >> x;
        max_value = x;
        min_value = x;
        sum += x;
        for (int j = 1; j < m; ++j) {
            cin >> x;
            if (x > max_value) {
                max_value = x;
            }
            else if (x < min_value)  {
                min_value = x;
            }
            sum += x;
        }

        cout.setf(ios::fixed);
        cout.precision(4);
        cout << min_value << ' ' << max_value << ' ' << sum/m << endl;
    }
}