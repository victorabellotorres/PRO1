#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Binario;
typedef vector<Binario> Matriz;

// Pre: n > 0, m > 0
// Post: retorna una matriz de '0' y '1' con dimensiones n*m leída de la entrada
Matriz leer_matriz(int n, int m) {
    Matriz M(n, Binario(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> M[i][j];
        }
    }

    return M;
}

// Pre: -
// Post: escribe el string s, seguido por dos punts, seguido por el Binario b
void escribir(string s, const Binario& b) {
    cout << s << ":";
    int m = b.size();
    for (int i = 0; i < m; ++i) cout << " " << b[i];
    cout << endl;
}

// Pre: gamma.size() = epsilon.size()
// Post: retorna el consumo calculado como gamma*epsilon en decimal
int calcula_consumo(const Binario& gamma, const Binario& epsilon) {
    int x = 0;
    int y = 0;
    int m = gamma.size();

    for (int i = 0; i < m; ++i) {
        x *= 2;
        y *= 2;
        if (gamma[i] == '1') x += 1;
        if (epsilon[i] == '1') y += 1;
    }

    return x*y;
}

// Pre: mat.size > 0; 0 <= j < mat[0].size()
// Post: retorna el bit más frecuente en la columna j de mat. En caso de empate retorna '0'.
char bit_mas_comun(const Matriz& mat, int j) {
    int n = mat.size();
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (mat[i][j] == '1') ++count;
        else --count;
    }

    if (count > 0) return '1';
    return '0';
}

// Pre: mat.size > 0; gamma.size() == mat[0].size(); epsilon.size() == mat[0].size()
// Post: gamma y epsilon son el ratio gamma y epsilon de mat, respectivamente
void calcula_ratios(const Matriz& mat, Binario& gamma, Binario& epsilon) {
    int m = mat[0].size();

    for (int j = 0; j < m; ++j) {
        gamma[j] = bit_mas_comun(mat, j);
        if (gamma[j] == '0') epsilon[j] = '1';
        else epsilon[j] = '0';
    }
}

int main() {
 int n, m;
    while (cin >> n >> m) {
        Matriz mat = leer_matriz(n, m);
        Binario gamma(m);
        Binario epsilon(m);
        calcula_ratios(mat, gamma, epsilon);
        escribir("Gamma", gamma);
        escribir("Epsilon", epsilon); 
        cout << "Consumo: " << calcula_consumo(gamma, epsilon) << endl << endl;
    }
}