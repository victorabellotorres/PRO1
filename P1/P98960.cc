#include <iostream>
using namespace std;

int main () {
    char x;
    cin >> x;
    if (x < 97){
        cout << char('a' + int(x - 'A')) << endl;
    }
    else {
        cout << char('A' + (int(x - 'a'))) << endl;
    }
}
