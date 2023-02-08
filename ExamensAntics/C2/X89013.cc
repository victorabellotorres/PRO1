#include <iostream>
#include <string>
using namespace std;

bool pattern_match(string pattern, string word ) {
    int p_size = pattern.size();
    int w_size = word.size();
    if (w_size < (p_size - 1)) return false;

    int i = 0;
    while (i < p_size and pattern[i] != '*') {
        if (pattern[i] != word[i]) return false;
        ++i;
    }
    
    i = 1;
    while (i <= p_size and pattern[p_size - i] != '*') {
        if (pattern[p_size - i] != word[w_size - i]) return false;
        ++i;
    }

    return true;
}

int main() {
    string pattern;
    while (cin >> pattern) {
        int n;
        cin >> n;

        cout << pattern << ":" << endl;
        for (int i = 0; i < n; ++i) {
            string word;
            cin >> word;

            if (pattern_match(pattern, word)) cout << "    " << word << endl;
        }
    }
}
