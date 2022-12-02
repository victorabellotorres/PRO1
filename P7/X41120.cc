/*
    Write a program that given a vector with the vertical profile of a hike in the
    mountains, prints all the existing peaks and then prints the ones that are higher 
    than the last peak
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

// precondition: a vector of integers
//  postcondition: prints the elements of the vector in a proper format
void print_peaks(const vector<int>& v) {
    int m = v.size();

    // prints all the peaks
    cout << m << ":";
    for(int i = 0; i < m; ++i) {
        cout << " " <<  v[i];
    }
    cout << endl;

    // prints peaks higher than the last peak
    bool exists_higher_peaks = false;
    int last_peak = 0;
    if (m > 0) last_peak = v[m - 1];

    for (int i = 0; i < m - 1; ++i) {
        if (v[i] > last_peak) {
            if (i != 0) cout << " ";
            cout << v[i];

            exists_higher_peaks = true;
        }
    }

    if (not exists_higher_peaks) cout << "-";
    cout << endl;
}

// precondition: a vector > 3 of integers representing a vertical mountain hike profile 
// postcondition: a vector cointaining the peaks of the vertical profile
vector<int> obtain_peaks(const vector<int>& v) {
    int m = v.size();

    vector<int> existing_peaks;
    for (int i = 1; i < m - 1; ++i) {
        if (v[i] > v[i-1] and v[i] > v[i + 1]) existing_peaks.push_back(v[i]);
    }
    return existing_peaks;
}

int main() {
    int n;
    cin >> n;

    vector<int> vertical_profile(n);
    read_vector(vertical_profile);

    vector<int> peaks = obtain_peaks(vertical_profile);
    print_peaks(peaks);
}