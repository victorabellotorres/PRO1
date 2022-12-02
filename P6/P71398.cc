/*
    Escriut un procediment recursiu que deixi en el paràmetre de sortida 
    maxim el dígit més gran de n, i deixi en el paràmetre de sortida minim
    el dígit més petit de n.
*/
#include <iostream>
using namespace std;

int max(int x,int y) {
    if (x > y) return x;
    return y;
}

int min(int x,int y) {
    if (x < y) return x;
    return y;
}

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n < 10) {
        maxim = n;
        minim = n;
    }
    else {
        digit_maxim_i_minim(n/10, maxim, minim);
        maxim = max(n%10, maxim);
        minim = min(n%10, minim);
    }
}


int main() {
    int x;
    while (cin >> x) {
        int a, b;
        digit_maxim_i_minim(x, a, b);
        cout << x << ' ' << a << ' ' << b << endl;
    }
}
