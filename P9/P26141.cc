#include <iostream>
using namespace std;

struct Rational {
    int num, den;
};

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

void simplify(Rational& R) {
    int d = gcd(R.den, R.num);
    R.den /= d;
    R.num /= d;

    if (R.den < 0) {
        R.den = -R.den;
        R.num = -R.num;
    }
}

Rational add(Rational R1, Rational R2) {
    Rational sol;

    sol.num = R1.num*R2.den + R2.num*R1.den;
    sol.den = R1.den*R2.den;

    return sol; 
}

Rational substract(Rational R1, Rational R2) {
    Rational sol;

    sol.num = R1.num*R2.den - R2.num*R1.den;
    sol.den = R1.den*R2.den;

    return sol;
}

Rational multiply(Rational R1, Rational R2) {
    Rational sol;

    sol.den = R1.den*R2.den;
    sol.num = R1.num*R2.num;

    return sol;
}

Rational divide(Rational R1, Rational R2) {
    Rational sol;
    sol.den = R1.den*R2.num;
    sol.num = R1.num*R2.den;

    return sol;
}

Rational operate(string s, Rational R1, Rational R2) {
    Rational sol;
    if (s == "add") sol = add(R1, R2);
    else if (s == "substract") sol = substract(R1, R2);
    else if (s == "multiply") sol = multiply(R1, R2);
    else sol = divide(R1, R2);

    simplify(sol);
    return sol;
}

void print_rational(Rational R) {
    if (R.den == 0) cout << 0 << endl;
    else if (R.num%R.den == 0) cout << R.num/R.den << endl;
    else cout << R.num << "/" << R.den << endl;
}

int main() {
    Rational R1;
    cin >> R1.num >> R1.den;

    simplify(R1);
    print_rational(R1);

    Rational R2;
    string op;
    while (cin >> op >> R2.num >> R2.den) {
        
        R1 = operate(op, R1, R2);
        print_rational(R1);
    }
}