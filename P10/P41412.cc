/*
    Write a procedure that sorts v in non-decreasing order using the insertion sort algorithm.
*/
#include <iostream>
#include <vector>
using namespace std;

void swap(vector<double>& v, int i, int j) {
    double aux = v[j];
    v[j] = v[i];
    v[i] = aux;
}

void insertion_sort(vector<double>& v) {
    int m = v.size();
    for (int i = 1; i < m; ++i) {
        int c = i;
        while (c > 0 and v[c] < v[c - 1]) {
            swap(v, c, c - 1);
            --c;
        }
    }
}

