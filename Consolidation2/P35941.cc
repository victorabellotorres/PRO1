/*
    Consider a text made up of only lowercase letters, which is encrypted with one
    of the easiest methods: each letter has an associated character that is always
    written in its place. Given the translation table and the text encrypted with
    this table, recover the original text.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int ALPHABET_SIZE = 'z' - 'a' + 1;

vector<string> read_message(int n) {
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    return s;
}

void decrypt_message(string table, const vector<string>& message) {
    int m = message.size();

    for (int i = 0; i < m; ++i) {
        string line = message[i];
        int length = line.size();

        for (int j = 0; j < length; ++j) {

            if (line[j] == '_') cout << ' ';
            else {
                int pos = 0;
                while (pos < ALPHABET_SIZE and table[pos] != line[j]) ++pos;
                cout << char('a' + pos);
            }
        }
        cout << endl;
    }
}

int main() {
    string table;
    while (cin >> table) {
        int n;
        cin >> n;

        vector<string> encrypted = read_message(n);

        decrypt_message(table, encrypted);
        cout << endl;
    }
}