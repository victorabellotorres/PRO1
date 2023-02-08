#include <iostream>
#include <vector>
using namespace std;

int main() {
    string city;

    while(cin >> city) {
        int max1 = -1;
        int max2 = -1;
        int num ;
        cin >> num;
        while (num != -1) {
            if (num > max2) {
                if (num > max1) {
                    if (max2 < num) {
                        max2 = max1;
                    }
                    max1 = num;
                }
                else max2 = num;
            }
            cin >> num;
        }
        cout << city << ": " << max1 << " " << max2 << endl;
    }
}