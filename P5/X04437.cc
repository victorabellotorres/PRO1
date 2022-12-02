/*
    Write a function
        double dist_or(double x, double y);
    which returns the distance to the origen from the point (x,y).

    The input is formed by two reals

    You only need to submit the required procedure; your main program will be ignored.
*/
#include <iostream>
#include <cmath>
using namespace std;

double dist_or(double x, double y) {
    return sqrt(x*x + y*y);
}