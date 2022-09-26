#include <iostream>
using namespace std;

int main() {
    int d,n,t,a;
    int count = 0;
    cin >> d >> n >> t;
    for(int i = 0; i < t; i++) {
        cin >> a;
        n += a - d;
        if (n > 0) count++;
    }
    cout << count << endl;
}