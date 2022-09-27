/*
    Program that, given two intervals, computes the interval corresponding to
    their intersection, or tells that it is empty.
*/

#include <iostream>
using namespace std;

int main() {
    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 <= a2 and b1 >= a2){
        if (b2 < b1){ // a2,b2 esta dentro de a1,b1
            cout << '[' << a2 << ',' << b2 << ']'<< endl;
        }
        else
            cout << '[' << a2 << ',' << b1 << ']'<< endl;
    }
    else if (a2 <= a1 and b2 >= a1){
        if (b1 < b2){ // a2,b2 esta dentro de a1,b1
            cout << '[' << a1 << ',' << b1 << ']'<< endl;
        }
        else
            cout << '[' << a1 << ',' << b2 << ']'<< endl;
    }
    else cout << "[]" << endl;
}
