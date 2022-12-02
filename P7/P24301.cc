/*
    Write a function that returns the concatenation of v1 and v2. That is,
    you must return a vector with the elements of v1 followed by the elements of v2.
*/
#include <iostream>
#include <vector>
using namespace std;


vector<int> concatenation(const vector<int> & V1, const vector<int> & V2) {
    int m = V2.size();

    vector<int> V3 = V1;
    for (int i = 0; i < m; ++i) {
        V3.push_back(V2[i]);
    }
    return V3;

}

/* OTHER OPTION
    vector<int> concatenation(const vector<int> & V1, const vector<int> & V2) {
    int m1 = V1.size();
    int m2 = V2.size();
    int m3 = m1 + m2;

    vector<int> V3(m3);
    for (int i = 0; i < m3; ++i) {
        if (i < m1) V3[i] = V1[i];
        else V3[i] = V2[i - m1];
    }
    return V3;

}
*/