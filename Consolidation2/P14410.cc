#include <iostream>
using namespace std;

void converge(int n, int& k, int& far) {
    k = 0;
    far = 1;
    while (n != 1) {
        ++k;
        if (n > far) far = n;

        if (n%2 == 0) n /= 2;
        else n = n*3 + 1;
    }
}

int main() {
    int m, p;

    cin >> m >> p;

    int k, far;
    int max = 0;
    for (int i = 1; i <= m; ++i) {
        converge(i, k, far);

        if (k >= p) cout << i << endl;
        if(far > max) max = far;
    }
    cout << "The greatest reached number is " << max << "." << endl;
}