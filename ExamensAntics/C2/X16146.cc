#include <iostream>
#include <vector>
using namespace std;

vector<int> read_vector(int n) {
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    return v;
}

double even_average(vector<int> v) {
    int m = v.size();

    double average = 0;
    int count = 0;
    for (int i = 0; i < m; ++i) {
        if (v[i]%2 == 0) {
            average += v[i];
            ++count;
        }
    }
    average /= count;

    return average;
}

// Pre: --
// Post: returns the position of the last element in v smaller than x, -1 if that element does not exist
int last_position_of(const vector<int>& v, double x) {
    int m = v.size();
    for (int i = m - 1; i >= 0; --i) {
        if (double(v[i]) < x) return i;
    }
    return -1;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v = read_vector(n);
        
        double average = even_average(v);

        cout << last_position_of(v, average) << endl;
    }
}