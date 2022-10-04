/*
    Programa que llegeixi un natural n i escrigui figures n× n com es mostra als exemples.

    L’entrada és un natural n ≥ 1.

    Cal escriure la figura corresponent.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; i--){
        for (int j = 0; j < n; j++) {
            if(j < i) 
                cout << '+';
            else if(j == i)
                cout << '/';
            else
                cout << '*';
        }
        cout << endl;
    }
}