#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (((year/100 *100) == year and (year/100 % 4) == 0) or  ((year/100 *100) != year and (year % 4) == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
