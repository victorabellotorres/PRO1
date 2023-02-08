/*
    Write a program that, given a time expressed in hours, minutes and seconds,
    computes the time corresponding to add one second, and also the time corresponding
    to subtract one second.
*/
#include <iostream>
using namespace std;

struct Time {
    int h, m, s;
};

void one_second(const Time& t, Time& t1, Time& t2) {
    t1.s = (t.s + 1);
    t1.m = t.m + t1.s/60;
    t1.h = (t.h + t1.m/60)%24;
    t1.s %= 60;
    t1.m %= 60;

    t2.s = (t.s + 59)%60;
    t2.m = (t.m + t2.s/59*59)%60;
    t2.h = (t.h + t2.s/59*t2.m/59*23)%24;
}

int main() {
    Time t;

    while (cin >> t.h >> t.m >> t.s) {
        Time t1;
        Time t2;

        one_second(t, t1, t2);

        cout << t1.h << " " << t1.m << " " << t1.s << endl;
        cout << t2.h << " " << t2.m << " " << t2.s << endl;
    }
}
