#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
    string artist, title, genre;
    int year;
};

bool compare_track(const Track& t1, const Track& t2) {
    if (t1.artist == t2.artist) {
        if (t1.year == t2.year) return t1.title < t2.title;
        return t1.year < t2.year;
    }
    return t1.artist < t2.artist;
}

vector<Track> read_tracks(int n) {
    vector<Track> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].artist >> v[i].title >> v[i].genre >> v[i].year;
    }
    return v;
}

void print_track(const Track &t) {
    cout << t.artist;
    cout << " (" << t.year;
    cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n; 
    cin >> n;

    vector<Track> v = read_tracks(n);
    sort(v.begin(), v.end(), compare_track);

    string genre;
    while (cin >> genre) {
        for (int i = 0; i < n; ++i) {
            if (v[i].genre == genre) print_track(v[i]);
        }
    }
}