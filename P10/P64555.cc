#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int  x, y, dist;
};

bool my_cmp(const Point& a, const Point& b) {
    if (a.dist == b.dist) {
        if (a.x == b.x) {
            return a.y < b.y;
        }
        return a.x < b.x;
    }
    return a.dist < b.dist;
}

int manhattan_dist(const Point& m_point, const Point& p) {
    int x = m_point.x - p.x;
    int y = m_point.y - p.y;
    if (x < 0) x = -x;
    if (y < 0) y = -y;

    return x + y;
}

int main() {
    Point m_point;
    cin >> m_point.x >> m_point.y;

    int n;
    cin >> n;
    vector<Point> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].x >>  v[i].y;
        v[i].dist = manhattan_dist(m_point, v[i]);
    }
    sort(v.begin(), v.end(), my_cmp);

    int start_dist = -1;
    for (int i = 0; i < n; ++i) {
        if (v[i].dist > start_dist) {
            cout << "points at distance " << v[i].dist << endl;
            start_dist = v[i].dist;
        }

        cout << v[i].x << " " << v[i].y << endl;
    }
}