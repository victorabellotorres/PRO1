/*
    Program that reads two numbers and prints their minimum.
*/
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>> a >> b;
    if (a > b)
        cout<< b <<endl;
    else if (a < b)
        cout<< a << endl;
    else if (a == b)
        cout<< a <<endl;
}
