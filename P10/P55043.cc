#include <iostream>
using namespace std;


int sum_of_digits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x%10;
        x /= 10;
    }
    return sum;
}

int encounter_of_rivers (int n) {
    int x, y, z;
    x = 1;
    y = 3;
    z = 9;
    while (x != n and y != n and z != n) {
            if (x < n) x += sum_of_digits(x);
            if (y < n) y += sum_of_digits(y);
            if (z < n) z += sum_of_digits(z);
            if (x > n and y > n and z > n) n += sum_of_digits(n);
    }
    return n;
}

int main ()
{
    int n;
    while (cin >> n) {
        cout << n << " " << encounter_of_rivers(n) << endl;
    }
}