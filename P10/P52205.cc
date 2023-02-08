#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void sort(vector<double>& v, int left, int mid,int right) {
    int m = right - left + 1;
    vector<double> aux(m);
    int i = left;
    int j = mid + 1;
    int k = 0;
    while (i <= mid and j <= right) {
        if (v[i] <= v[j]) {
            aux[k] = v[i];
            ++i;
        }
        else {
            aux[k] = v[j];
            ++j;
        }
        ++k;
    }

    while (i <= mid) {
        aux[k] = v[i];
        ++k;
        ++i;
    }
    while (j <= right) {
        aux[k] = v[j];
        ++k;
        ++j;
    }

    for (k = 0; k < m; ++k) {
        v[left + k] = aux[k];
    }
}

void merge(vector<double>& v, int left, int right) {
    if (left < right) {
        int mid = (left + right)/2;
        merge(v, left, mid);
        merge(v, mid + 1, right);

        sort(v, left, mid, right);
    }
}

void mergesort(vector<double>& v) {
    int m = v.size();
    int left = 0; 
    int right = m - 1;
    merge(v, left, right);
}

