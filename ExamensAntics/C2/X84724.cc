/*
    Escriviu un programa que llegeixi els temps emprats per un ciclista en les etapes
    d’una volta ciclista, i escrigui la suma d’aquests temps.
*/
#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    char ch;

    int n;
    cin >> n;
    int sum_h = 0;
    int sum_m = 0;
    int sum_s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> h >> ch >> m >> ch >> s;
        sum_h += h;
        sum_m += m;
        sum_s += s;
    }
    sum_h = sum_h + (sum_m/60);
    sum_m = (sum_m%60 + sum_s/60)%60;


    cout << sum_h << "H " << sum_m << "M " << sum_s%60 << "S" << endl;
}