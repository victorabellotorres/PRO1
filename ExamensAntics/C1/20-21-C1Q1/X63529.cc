/*
    Write a program that given integers h and m such that 0 ≤ h < 24 and 0 ≤ m < 60 representing the
    expected train time arrival and a non negative integer d representing a delay in minutes, prints
    the updated arrival time in the format “HH:MM”.

    The input consists of three integers h, m and d such that 0 ≤ h < 24, 0 ≤ m < 60 and d ≥ 0.

    The updated arrival time in the format “HH:MM”.
*/
#include <iostream>
using namespace std;

int main() {
    int h, m, delay;
    cin >> h >> m >> delay;

    h = (h + (m + delay)/60)%24;
    m = (m + delay)%60;

    if (h < 10) cout << 0;
    cout << h << ':';
    if (m < 10) cout << 0;
    cout << m << endl;
}