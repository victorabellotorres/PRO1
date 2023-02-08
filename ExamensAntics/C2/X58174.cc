/*
    Donada una seqüència de naturals que representen els punts anotats per un equip de
    basket, es diu que una anotació és consolidada si supera els punts anotats a les
    dues jornades anteriors. Per exemple, donada la seqüència d’anotacions:
    60 57 80 60
    la jornada amb 80 punts (la tercera) és consolidada perquè es va superar 
    l’anotació de les dues anteriors (que va ser de 60 i 57 punts, respectivament). En aquesta seqüència, aquesta és la única anotació consolidada.

    Donada la informació de les anotacions dels diferents equips a les
    jornades disputades, volem saber:

    per cada equip, el seu número d’anotacions consolidades
    quin és l’equip amb el màxim d’anotacions consolidades
*/
#include <iostream>
#include <vector>
using namespace std;

int anotacions_consolidades(const vector<int>& v) {
    int m = v.size();

    int count = 0;
    for (int i = 2; i < m; ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i - 2]) ++count;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int max = -1;
    string team_max = "";

    string team;
    while (cin >> team) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int x = anotacions_consolidades(v);
        cout << team << ": " << x << endl;

        if (x > max) {
            max = x;
            team_max = team;
        }
        else if (x == max) {
            if (team < team_max) {
                max = x;
                team_max = team;
            }
        }
    }

    cout << "----------" << endl;
    if (max == -1) cout << "no hay equipos" << endl;
    else cout << team_max << ": " << max << endl;
}