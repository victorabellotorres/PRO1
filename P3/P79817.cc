/*

	Rrogram that compute powers.

	Input: Input consists of several pairs
	of integer numbers a and b. Assume b ≥ 0.
	
	Output: For every pair a,b, print a^b. Supose, as usual, that 0⁰= 1.
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int base, potencia, resultat;
    while (cin >> base >> potencia) {
        resultat = pow(base, potencia);
        cout << resultat << endl;
    }
}