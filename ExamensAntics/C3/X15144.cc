#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Article {
    string identifier;
    string topic;
    int freq;
};


//pre: n > 0
//post: returns article vector formed by input channel data
vector<Article> initialize_art_vector(int n) {
    vector<Article> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].identifier >> v[i].topic;
        v[i].freq = 0;
    }

    return v;
}


//pre: v is non-empty
//post: write vector on output
void write_art_vector(const vector<Article> v) {
    int n = v.size();

    for (int i = 0; i < n; ++i) {
        cout << v[i].topic << " " << v[i].freq << " " << v[i].identifier << endl;
    }
}

void update_querys(vector<Article>& v,const vector<string>& s) {
    int n = v.size();
    int m = s.size();

    int j = 0;
    for (int i = 0; i < n; ++i) {
        while (j < m and v[i].identifier == s[j]) {
            ++v[i].freq;
            ++j;
        }
    }
}

bool article_cmp(const Article& a, const Article& b) {
    if (a.topic == b.topic) {
        if (a.freq == b.freq) {
            return a.identifier < b.identifier;
        }
        return a.freq > b.freq;
    }
    return a.topic < b.topic;
}

int main() {
    int n;
    cin >> n;
    vector<Article> v = initialize_art_vector(n);
    
    vector<string> s;
    string query;
    while (cin >> query) {
        s.push_back(query);
    }
    sort(s.begin(), s.end());
    update_querys(v, s);

    sort(v.begin(), v.end(), article_cmp);

    write_art_vector(v);
}