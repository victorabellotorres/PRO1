/*
    Feu un programa que llegeixi parells de dates i que, per a cada parell, digui si la
    primera data és anterior, igual o posterior a la segona data.
*/
#include <iostream>
using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    if (a1 != a2) return a1 - a2;
    else if (m1 != m2) return m1 - m2;
    return d1 - d2;
}

int main() {
    int d1, m1, a1, d2, m2, a2;
    char ch;

    while (cin >> d1 >> ch >> m1 >> ch >> a1 >> d2 >> ch >> m2 >> ch >> a2) {
        int x = compara(d1, m1, a1, d2, m2, a2);

        if (x < 0) cout << "anterior" << endl;
        else if (x > 0) cout << "posterior" << endl;
        else cout << "iguals" << endl;
    }
}