#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    if (n < 10) return n;
    else return n%10 + sum_of_digits(n/10);
}

bool is_multiple_3(int n) {
    if (n < 10) return n == 3 or n == 6 or n == 9;
    else return is_multiple_3(sum_of_digits(n));
}


int main() {
    int n;
    while (cin >> n) {
        cout << (is_multiple_3(n) ? "true" : "false") << endl;
    }
}
