/*
    function that returns if n1/d1 is strictly smaller than n2/d2
*/
#include <iostream>
using namespace std;


bool c_frac(int n1, int d1, int n2, int d2) {
    return n1/double(d1) < n2/double(d2);
}


int main() {
    int n1, d1, n2, d2;
    while (cin >> n1 >>  d1 >> n2 >> d2) {
        if (c_frac(n1,d1,n2,d2)) cout << "yes" << endl;
        else cout << "no" << endl;
    }   
}
