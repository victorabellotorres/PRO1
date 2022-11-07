/*
    A wash cycle always takes less than 24 hours. Write a program that, given the start and end times of a washing cycle, calculates the elapsed time in the cycle.

    There are four integers on the input. The first two, h0 and m0, represent the cycle start time and are such that 0≤ h0<24 and 0≤ m0<60 . The last two, h1 and m1,
    represent the cycle end time and are such that 0≤ h1<24 and 0≤ m1 <60.

    The elapsed time in the cycle in the format HH:MM, as shown in the examples.
*/
#include <iostream>
using namespace std;

int main() {
    const int MINUTES = 60;
    const int HOURS = 24;

    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int total_hours;
    int total_minutes;

    total_minutes = MINUTES - m1 + m2;
    if(h1 >= h2) total_hours = HOURS - h1 + h2 - 1;
    else total_hours = h2 - h1 - 1;
    total_hours += total_minutes/MINUTES;

    total_minutes %= MINUTES;
    total_hours %= HOURS;

    cout << total_hours/10 << total_hours%10 << ':' << total_minutes/10 << total_minutes%10 << endl;
}