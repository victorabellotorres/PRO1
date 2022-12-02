/*
    Given two sequences of non negative integers s1 and s2 both ending in 0, write a
    program that computes the maximum m of the elements in s1 and that shows the position
    of its latestoccurrence within s1 and the position of its first ocurrence within s2.
*/
#include <iostream>
using namespace std;

void infoSequence(int& max, int& Ipos) {
    int num = 1;// num = 1 to enter de loop
    int count = 0;

    while (num != 0) {
        ++count;
        cin >> num;

        if (num >= max) {
            max = num;
            Ipos = count;
        }
    }
}

int main() {
    int max = 0;
    int Ipos;

    infoSequence(max, Ipos);
    cout << max << ' ' << Ipos;
    
    Ipos = 0;
    bool found = false;
    int num;
    int count = 0;
    cin >> num;
    while (num != 0 and not found) {
        ++count;
        if (num == max) {
            Ipos = count;
            found = true;
        }
        cin >> num;
    }

    if (Ipos == 0) cout << " -" << endl;
    else cout << ' ' << Ipos << endl;
}