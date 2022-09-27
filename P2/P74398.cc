/*
    El número 163 se representa como 10100011 en base 2, 20001 en
    base 3, 543 en base 8, 163 en base 10, y A3 en base 16. Dado un
    número, te pedimos que nos digas cuántas cifras son necesarias
    para representarlo en todas las bases de la 2 a la 16.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int base = 2 ; base <= 16 ; base++){
        int cifras = 0;
        int x = 1;
        while (n >= x){
            x *= base;
            cifras++;
        }
        cout << "Base " << base << ": " << cifras << " cifras." << endl;
    }
}