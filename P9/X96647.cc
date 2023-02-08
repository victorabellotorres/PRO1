#include <iostream>
#include <vector>
using namespace std;

struct Punto {

  double x,y;

};

vector<Punto> read_vector(int n) {
    vector<Punto> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i].x >> v[i].y;
    return v;
}

bool at_lest_two_element_dif(const vector<Punto>& vect) {
    int m = vect.size();
    for (int i = 0; i < m; ++i) {
        Punto p1 = vect[i];
        for (int j = i + 1; j < m; ++j) {
            Punto p2 = vect[j];
            if (p1.x != p2.x or p1.y != p2.y) return true;
        }
    }
    return false;
}

bool baricentro (const vector<Punto>& vect, Punto& b) {
    int m = vect.size();
    double sum_x, sum_y;
    sum_x = sum_y = 0;

    for (int i = 0; i < m; ++i) {
        sum_x += vect[i].x;
        sum_y += vect[i].y;
    }

    b.x = sum_x/m;
    b.y = sum_y/m;

    for (int i = 0; i < m; ++i) {
        if (vect[i].x == b.x and vect[i].y == b.y) return true;
    }
    return false;
}

void check_normalized_vector(const vector<Punto>& vect) {
    Punto bari;
    bool existe_baricentro = baricentro(vect, bari);

    cout << "baricentro: (" << bari.x << "," << bari.y << ")" << endl;

    if (not at_lest_two_element_dif(vect)) cout << "el vector no cumple la propiedad 1" << endl;
    else if (bari.x != bari.y) cout << "el vector no cumple la propiedad 2" << endl;
    else if (existe_baricentro) cout << "el vector no cumple la propiedad 3" << endl;
    else cout << "vector normalizado" << endl;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    while (cin >> n) {
        vector<Punto> vect = read_vector(n);

        check_normalized_vector(vect);
    }
}