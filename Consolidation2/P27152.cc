#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values = {
        1, 6, 4, 3, 1, 6, 6, 6, 3, 6, 7, 4, 5,
        3, 2, 5, 6, 3, 2, 4, 4, 6, 7, 6, 6, 6
    };
    int count = 0;

    char ch;
    while (cin >> ch) {
        count += values[ch - 'a'];
    }
    cout << count << endl;
}