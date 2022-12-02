#include <iostream>
using namespace std;

//Precondition: n > 3 and n is odd
void cross(int n, char c) {
    for (int i = n; i > 0; --i) {
        if (i != (n/2 + 1)) {
            for (int j = n/2; j > 0; --j) cout << " ";
            cout << c;
        }
        else {
            for (int j = n; j > 0; --j) cout << c;
        }
        cout << endl;
    }
}


int main() {
    int n;
    char c;
    while (cin >> n >> c) cross(n, c);
}
