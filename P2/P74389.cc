#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int base = 2 ; base <= 16 ; base++){
        int cifras = 0;
        int x = 1;
        while (n >= x){
            x *= base;
            cifras++;
        }
        cout << "Base " << base << ": " << cifras << " cifras." << endl;
    }
}