/*

*/

#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    return (year%4 == 0 and not (year%100 == 0 and (year/100)%4 != 0));
}

bool is_valid_date(int d, int m, int a) {
    bool valid = true;

    if (d <= 0 or m <= 0 or d > 31 or m > 12)
	valid = false;
    else if ((m == 4 or m == 6 or m == 9 or m == 11) and d > 30)
	valid = false;
    else if (m == 2 and ((d == 29 and not is_leap_year(a)) or d > 29))
	    valid = false;

    return valid;
}

int main() {
    int d, m, a;
    while (cin >> d >> m >> a)
        cout << (is_valid_date(d, m, a) ? "true" : "false") << endl;
}