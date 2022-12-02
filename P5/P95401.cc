/*
    Write a function that tells if the given year is a leap year or not. To recall the rules about leap years, check the exercise P61634: “Leap years”.
        bool is_leap_year(int year);
    The parameter year is between 1800 and 9999, both included.

    You only need to submit the required procedure; your main program will be ignored.
*/
#include <iostream>
using namespace std;


bool is_leap_year(int year) {
    return (year%4 == 0 and not (year%100 == 0 and (year/100)%4 != 0));
}

