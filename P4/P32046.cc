/*
    Feu un programa que llegeixi una seqüència de naturals, i que compti i escrigui aquells que acabin amb les mateixes tres xifres que el primer nombre de la seqüència.

    L’entrada és una seqüència no buida de naturals més grans o iguals que 100.

    Cal escriure els nombres de l’entrada que acabin amb les mateixes tres xifres que el primer nombre de la seqüència, així com quants d’aquests nombres hi ha. Utilitzeu el format dels exemples.
*/
#include <iostream>
using namespace std;

int main() {
    int pattern,count,n;
    count = 0;
    cin >> pattern;
    
    cout << "nombres que acaben igual que " << pattern << ':' << endl;
    while (cin >> n) {
        if(n%1000 == pattern%1000){
            cout << n << endl;
            ++count;
        }
    }
    cout << "total: " << count << endl;
}