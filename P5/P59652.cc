/*
    Write a procedure to read a rational number given in the form “numerator”/“denominator”,
    and store these two values in num and den, respectively.
    Additionally, you must remove all common factors from numand den.
*/
#include <iostream>
using namespace std;

int mcd(int a, int b) {
    // Calc the mcd
    while (b > 0) {
	int temp;

	temp = b;
	b = a%b;
	a = temp;
    }

    return a;
}

void read_rational(int& num, int& den) {
    char c;
    cin >> num >> c >> den;

    int mcdAB = mcd(num, den);

    num /= mcdAB;
    den /= mcdAB;
}

int main() {
    int num, den;
    cin >> num >> den;

    read_rational(num, den);

    cout << num << " " << den << endl;
}