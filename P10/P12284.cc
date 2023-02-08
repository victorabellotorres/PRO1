#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Word {
    string word;
    int count;
};

vector<string> read_words(int n) {
    vector<string> s(n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    return s;
}

bool wordcmp(const Word& a, const Word& b) {
    if (a.count == b.count) {
        return a.word < b.word;
    }
    return a.count > b.count;
}

vector<Word> words_frequency(const vector<string>& words) {
    int m = words.size();
    vector<Word> frq_words(m);
    
    string prev_word = words[0];
    frq_words[0].word = words[0];
    frq_words[0].count = 1;
    int j = 0;
    for (int i = 1; i < m; ++i) {
        if (prev_word != words[i]) {
            prev_word = words[i];
            ++j;
            frq_words[j].word = words[i];
            frq_words[j].count = 1;
        }
        else {
            ++frq_words[j].count;
        }
    }

    vector<Word> aux(j + 1);
    for (int i = 0; i <= j; ++i) {
        aux[i] = frq_words[i];
    }

    sort(aux.begin(), aux.end(), wordcmp);

    return aux;
}

int main() {
    int n, k;
    
    while (cin >> n >> k) {
        vector<string> words = read_words(n);
        sort(words.begin(), words.end());

        vector<Word> frq_words = words_frequency(words);

        for (int i = 0; i < k; ++i) {
            cout << frq_words[i].word << endl;
        }
        cout << "----------" << endl;
    }
    
    
}