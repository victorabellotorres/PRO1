#include <iostream>
#include <cmath>
using namespace std;

double eucl_distance(double x_dist, double y_dist) {
    return sqrt(x_dist*x_dist + y_dist*y_dist);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    string route;
    while (cin >> route) {
        double distance = 0;

        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        double inici_x = x1;
        double inici_y = y1;
        while (x2 != inici_x or y2 != inici_y) {
            distance += eucl_distance(x1 - x2, y1 - y2);

            x1 = x2;
            y1 = y2;
            cin >> x2 >> y2;
        }

        distance += eucl_distance(x1 - x2, y1 - y2);
        cout << "Route " << route << ": " << distance << endl;
    }
}