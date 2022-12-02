/*
    Write a program that, given a sequence of integer numbers, tells if
    there is any number equal to the sum of the rest.
*/
#include <iostream>
#include <vector>
using namespace std;

// precondition: a vector of integers (wether defined or not)
// postcondition: a vector defined with the inputted data
void read_vector(vector<int>& v) {
    int m = v.size();

    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        v[i] = num;
    }
}

// precondition: a vector of integers
// postcondition: returns the sum of all the elements of the vector
int sum_vector(const vector<int>& v) {
    int m = v.size();
    int sum = 0;
    for (int i = 0; i < m; ++i) sum += v[i];
    
    return sum;
}

// precondition: a vector of integers
// postcondition: tells if there is a number which is equal to the sum of the rest
bool equal_to_sum_of_rest(const vector<int>& v) {
    int m = v.size();
    int total_sum = sum_vector(v);

    for (int i = 0; i < m; ++i) {
        if (v[i] == total_sum - v[i]) return true;
    }
    return false;
}

int main() {
    int n;

    while (cin >> n) {
        vector<int> v(n);
        read_vector(v);

        if (equal_to_sum_of_rest(v)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}