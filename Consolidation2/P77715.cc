#include <iostream>
#include <vector>
using namespace std;

const int ALPHABET_SIZE = 'z' - 'a' + 1;

bool is_pangram(const vector<bool>& alphabet) {
    for (int i = 0; i < ALPHABET_SIZE; ++i) {
        if (alphabet[i] == false) return false;
    }
    return true;
}

int main() {
    char ch;
    vector<bool> v(ALPHABET_SIZE, false);
    vector<bool> alphabet = v;
    while (cin >> ch) {
        if (ch >= 'a' and ch <= 'z') alphabet[ch - 'a'] = true;
        else if (ch >= 'A' and ch <= 'Z') alphabet[ch - 'A'] = true;
        else if(ch == '.') {
            if (is_pangram(alphabet)) cout << "YES" << endl;
            else cout << "NO" << endl;

            alphabet = v;
        }
    }
}