#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point center;
    double radius;
};

double dist(const Point& a, const Point& b) {
    double x_dist =  a.x - b.x;
    double y_dist = a.y - b.y;
    return sqrt(x_dist*x_dist + y_dist*y_dist);
}

// move point
void move(Point& p1, const Point& p2) {
    p1.x += p2.x;
    p1.y += p2.y;
}

//move circle
void move(Circle& c, const Point& p) {
    move(c.center, p);
}

void scale(Circle& c, double sca) {
    c.radius *= sca;
}

bool is_inside(const Point& p, const Circle& c) {
    return dist(p, c.center) < c.radius;
}

