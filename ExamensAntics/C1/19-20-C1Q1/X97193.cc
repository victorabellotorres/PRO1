/*
    We want to compute the perimeter or area of several triangles. When we want to compute the perimeter we write:
    perimetro a b c
    where a, b, c are real numbers greater than 0 representing the length of the triangle’s sides. When we want to compute the area we write:
    area b h
    where b, h are real numbers greater than 0 representing the base and height, respectively.

    The input is a sequence of cases, where each case starts with the word "perimetro" or "area" (depending on what we want to compute),
    followed by the necessary values (as described above). A special case with only the word "acabar" indicates that no more cases are left.

    For each case, the program has to write the perimeter or the area of the given triangle with 2 decimal places.
*/
#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    string option;
    while(cin >> option and option != "acabar") {
        if (option == "area") {
            double b, h;
            cin >> b >> h;
            cout << (b*h)/2 << endl;
        }
        else {
            double a, b, c;
            cin >> a >> b >> c;
            cout << a + b + c << endl;
        }
    }
}