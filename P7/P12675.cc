/*
    Write a function that given two vectors X and Y in increasing order,
    returns the number of common elements in the two vectors, that is, the
    number of integer numbers a such that a=X[i]=Y[j] for any i and j.
*/
#include <iostream>
#include <vector>
using namespace std;


int common_elements (const vector<int>& X, const vector<int>& Y) {
    int m1 = X.size();
    int m2 = Y.size();

    int count_elem = 0;
    int j = 0;
    for (int i = 0; i < m1; ++i) {
        bool exists_common_element = true;
        while (j < m2 and exists_common_element) {
            if (X[i] < Y[j]) exists_common_element = false;
            else {
                if (X[i] == Y[j]) ++count_elem;
                ++j;
            }
        }
    }
    return count_elem;
}