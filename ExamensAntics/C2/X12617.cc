#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Pre: two lower-case words; a non-negative integer d
// Post: it returns true if the two words are d-compatible, false otherwise
bool d_compatible(string word1, string word2, int d) {
    int size1 = word1.size();
    int size2 = word2.size();
    if (size1 != size2) return false;

    int count = 0;
    for (int i = 0; i < size1; ++i) {
        if (word1[i] != word2[i]) ++count;
    }

    return count <= d;
}

// Pre: a vector v of lower-case words; a lower-case word w; a non-negative integer d
// Post: it returns the first word in v which is d-compatible with w, "--" otherwise
string compatible_word(const vector<string>& P, string word, int d) {
    int m = P.size();
    for (int i = 0; i < m; ++i) {
        if (d_compatible(P[i], word, d)) return P[i];
    }
    return "--";
}

int main() {
    int d;
    cin >> d;

    int p;
    cin >> p;
    vector<string> P(p);
    for (int i = 0; i < p; ++i) {
        cin >> P[i];
    }

    string word;
    cin >> word;
    while (word != "STOP") {
        cout << word << ": " << compatible_word(P, word, d) << endl;

        cin >> word;
    }
}