/*
    Se te dan tres enteros A, B y C. Los números no se te dan necesariamente
    en ese orden, pero sí sabemos que A es menor que B y B es menor que C.
    Simplemente, te pedimos que escribas los tres números en el orden que se te indique.

    Input: La primera línea contiene tres enteros menores que 100 (los valores de
    A, B y C, en un orden cualesquiera). La segunda línea contiene tres letras
    mayúsculas (’A’, ’B’ y ’C’) representando el orden deseado.

    Escribe una línea con los tres números, en el orden indicado, separados por espacios.
*/
#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    int A, B, C;

    if (x < y and x < z) {
        A = x;
        if (y < z) {
            B = y;
            C = z;
        }
        else {
            B = z;
            C = y;
        }
    }
    else if (y < x and y < z) {
        A = y;
        if (x < z) {
            B = x;
            C = z;
        }
        else {
            B = z;
            C = x;
        }
    }
    else {
        A = z;
        if (x < y) {
            B = x;
            C = y;
        }
        else {
            B = y;
            C = x;
        }
    }

    char letra;
    for (int i = 0; i < 3; ++i) {
        cin >> letra;
        if (letra == 'A') cout << A;
        else if (letra == 'B') cout << B;
        else cout << C;
        if (i < 2) cout << ' ';
    }
    cout << endl;
}