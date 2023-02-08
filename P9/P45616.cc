#include <typeinfo>
#include <iostream>
using namespace std;

struct Clock {
    int h;      // hours (0<=h<24)
    int m;      // minutes (0<=m<60)
    int s;      // seconds (0<=s<60)
};


Clock midnight() {
    Clock midnight_clock;
    midnight_clock.h = midnight_clock.m = midnight_clock.s = 0;

    return midnight_clock;
}

void increase(Clock& r) {
    ++r.s;
    if (r.s >= 60) {
        r.s = 0;
        ++r.m;
        if (r.m >= 60) {
            r.m = 0;
            r.h = (r.h + 1)%24;
        }
    }
}
void print(const Clock& r) {
    cout << r.h/10 << r.h%10 << ":";
    cout << r.m/10 << r.m%10 << ":";
    cout << r.s/10 << r.s%10 << endl;

}

int main () {
    Clock r = midnight();
    for (int i=0; i<=25*60*60; ++i) {
        print(r);
        increase(r);
    }
}
