#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout.setf(ios::fixed);
    cout.precision(6);

    while (n > 0) {
        string s;
        cin >> s;
        if (s == "rectangle")  {
            double l,w;
            cin >> l >> w;
            cout << l * w << endl;
            --n;
        }
        else if (s == "circle") {
            double r;
            cin >> r;
            cout << r * r * M_PI << endl;
            --n;
        }
    }
}