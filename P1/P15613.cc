/*
    Program that reads an integer number that represents a temperature given in degree Celsius, and that tells
    if the weather is hot, if it’s cold, or if it’s ok.
    Suppose that it’s hot if the temperature is higher than 30 degrees, that it’s cold if the temperature is 
    lower than 10 degrees,and that it’s ok otherwise. Moreover, warn if with the given temperature water would boil,
    or if water would freeze. Assume that water boils at 100 or more degrees, and that water freezes at 0 or less degrees.
*/

#include <iostream>
using namespace std;

int main() {
    int temp;
    cin >> temp;
    if ((temp >= 10) and (temp <= 30))
        cout << "it's ok" << endl;
    else if (temp < 10) {
        cout << "it's cold" << endl;
        if (temp <= 0) cout << "water would freeze" << endl;
    }
    else if (temp > 30) {
        cout << "it's hot" << endl;
        if (temp >= 100) cout << "water would boil" << endl;
    }
}
