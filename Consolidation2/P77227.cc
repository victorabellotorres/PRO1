#include <iostream>
#include <vector>
using namespace std;


string exit(int p, vector<int>& v) {
    int m = v.size();
    while (v[p]) {
        int aux = v[p];
        v[p] = 0;
        p += aux;

        if (p < 0) return "left";
        if (p >= m)return "right";
    }
    return "never";
}

int main() {
    int p, n;
    while (cin >> p >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << exit(p, v) << endl;
    }
}
