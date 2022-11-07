/*
    Donada una seqüència no buida d’enters no negatius volem saber el valor del primer element que compleixi les dues condicions següents:
        - el seu valor és la meitat del màxim dels elements que esta a la seva esquerra
        - el separen un número parell d’elements d’aquest màxim

    En cas que el màxim a l’esquerra d’una element estigui repetit, es tindrà en compte la primera posició a la què va aparèixer. Per exemple, donada la seqüència:

    L’entrada és una seqüència no buida d’enters no negatius.

    La sortida és el valor del primer element que compleix les dues condicions especificades a l’enunciat (si existeix), o "no existeix" (si aquest element no existeix).
*/
#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int count = 0;
    int n;
    bool found = false;
    while(not found and cin >> n) {
        ++count;
        if (n > max) {
            max = n;
            count = -1;
        }
        else if (n == max/2.0 and count%2 == 0) {
            found = true;
        }
    }
    if (found) cout << n << endl;
    else cout << "no existe" << endl;
}