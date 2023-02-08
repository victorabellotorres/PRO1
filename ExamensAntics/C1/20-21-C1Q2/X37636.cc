/*
    Write a code that converts temperatures in Celsius degrees to Fahrenheit degrees and vice versa.
    We recall that t Celsius degrees are 1.8t + 32 Fahrenheit degrees.

    The input consists of a non-negative integer n followed by a sequence of n temperature measurements.
    Each measurement consists of a letter C or F that shows the scale and a real number that indicates the degrees on the scale.

    For each input measurement a line with the equivalent temperature on the other scale. Thus, if the
    measurement at the input is in Fahrenheit degrees, at the output it must be in Celsius degrees and vice versa.

    To follow the convenient format, write the following two code lines at the beginning of the main(): cout.setf(ios::fixed);
                                                                                                        cout.precision(1);
*/
#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(1);

    int n;
    cin >> n;

    for (int i = n; i > 0; --i) {
        char c;
        double temp;
        cin >> c >> temp;

        // Farenheit = 1.8*(CelsiusDegrees) + 32
        if (c == 'C') {
            temp = 1.8*temp + 32;
            cout << "F ";
        }
        else {
            temp = (temp - 32)/1.8;
            cout << "C ";
        }
        cout << temp << endl;
    }
}