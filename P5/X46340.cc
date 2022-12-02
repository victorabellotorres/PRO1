/*
    Implementa function
        int sum_min_max(int x, int y, int z);
    which given three numbers returns the sum of their minimum and maximum values. Input

    consists of three integer numbers.

    It holds 0 < x, y, z < 10⁹.

    You only need to submit the required procedure; your main program will be ignored.
*/
#include <iostream>
using namespace std;

int min_2(int x, int y) {
    if(x < y) return x;
    else return y;
}

int max_2(int x, int y) {
    if(x > y) return x;
    else return y;
}

int sum_min_max(int x,int y,int z) {
    return max_2(max_2(x, y), z) + min_2(min_2(x, y), z);
}

int main() {
  int x,y,z;
  while (cin >> x >> y >> z) cout << sum_min_max(x,y,z) << endl;
}
