/*
    In this exercice we say that in the position i of vector v there is a ramp when
    the elements v[i], v[i+1] y v[i+2] are sorted in strictly increasing or decreasing order.

    Write a program that given a vector prints at which positions exists any ramp and
    the number of potentially conflictive ramps (two ramps are conflictive if they have
    elements in common)
*/
#include <iostream>
#include <vector>
using namespace std;

// precondition: a vector of integers
// postcondition: a vector cointaining the inputted data
void read_vector(vector<int>& v) {  
    int m = v.size();

    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        v[i] = num;
    }
}

// precondition: a vector of integers (size > 3)
// postcondition: a vector of booleans with same size than the vector passsed by parameter
// indicating the firs position of an existing ramp
vector<bool> ramps_pos(const vector <int>& v) {
    int m = v.size();

    vector<bool> ramps(m, false);

    for (int i = 0; i < m - 2; ++i) {
        if (v[i] > v[i + 1] and v[i + 1] > v[i + 2]) ramps[i] = true;
        if (v[i] < v[i + 1] and v[i + 1] < v[i + 2]) ramps[i] = true;
    }

    return ramps;
}

// precondition: a vector of booleans (size > 3)
// postcondition: number of conflictive ramps represented by the vector passed by parameter
int pot_conflictive(const vector <bool>& b) {
    int m = b.size();
    int count_conf_ramps = 0;

    for (int i = 0; i < m - 2; ++i) {
        if (b[i]) {
            if (b[i + 1]) ++count_conf_ramps;
            if (b[i + 2]) ++count_conf_ramps;
        }
    }
    return count_conf_ramps;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        read_vector(v);

        // print positions of the ramps
        vector<bool> ramps = ramps_pos(v);
        cout << "positions with a ramp:";
        for (int i = 0; i < n; ++i) {
            if (ramps[i]) cout << " " << i;
        }
        cout << endl;

        // print number of conflictive ramps
        cout << "potentially conflictive: " << pot_conflictive(ramps) << endl;
        cout << "---" << endl;
    }
}