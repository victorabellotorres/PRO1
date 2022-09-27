/*
    Program that tells if a year is or is not a leap year.

    A leap year has 366 days. After the Gregorian reform, the leap years
    are those multiple of four that do not end with two zeros, and also
    the years ending with two zeros such that, after removing these two
    zeros, are divisible by four. Thus, 1800 and 1900, although being
    multiples of four, were not leap years; by contrast, 2000 was a leap year.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (((year/100 *100) == year and (year/100 % 4) == 0) or  ((year/100 *100) != year and (year % 4) == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
