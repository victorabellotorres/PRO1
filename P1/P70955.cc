/*
    Program that converts to seconds a given amount
    of years, days, hours, minutes and seconds.
*/

#include <iostream>
using namespace std;

int main() {
    int y,d,h,m,s,total;
    cin >> y >> d >> h >> m >> s;
    total = y * 365 * 3600 * 24 + d * 3600 * 24 + h * 3600 + m * 60 + s;
    cout << total << endl;
}
