/*
    Feu un programa que escrigui un rectangle amb f files i c columnes, de manera que a la diagonal hi hagi zeros,
    i la resta de posicions tinguin la distància a la diagonal (mesurada en nombre de passos horitzonals i verticals) mòdul 10.

    L’entrada consisteix en dos naturals estrictament positius f i c.

    Escriviu f files amb c caràcters, seguint els requeriments de l’enunciat.

    No podeu usar strings, ni vectors o similars.
*/
#include <iostream>
using namespace std;

int main() {
    int files, columnes;
    cin >> files >> columnes;

    for (int i = 0; i < files; ++i) {
        int decrement = i;
        int number = i;
        for (int j = 0; j < columnes; ++j) {
            cout << number%10;
            if (decrement > 0) --number;
            else ++number;
            --decrement;
        }
        cout << endl;
    }
}