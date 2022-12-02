/*
    Function that calculates the factorial of an int
*/
#include <iostream>
using namespace std;

// Preconditio:
//     n > 0 n 12
//Postcondition:
//     !n
int factorial (int n) {
    if (n == 0) return 1;
    else {
        return n * factorial(n - 1);
    }
}


int main () {
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
}   }

