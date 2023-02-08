#include <iostream>
#include <string>
using namespace std;

int complete_code(string code) {
    int missing_multiplier = 1;
    int result = 0;
    for (int i = 0; i < 10; ++i) {
        int digit;
        if (code[i] == '?') missing_multiplier = 10 - i;
        else {
            if (code[i] == 'X') digit = 10;
            else digit = code[i] - '0';

            result += digit*(10 - i);
        }
    }

    for (int i = 0; i < 10; ++i) {
        if ((result + i*missing_multiplier)%11 == 0) return i;
    }
    return 10;
}

int main() {
    string ISBN;
    while (cin >> ISBN) {
        int num = complete_code(ISBN);
        
        if (num == 10) cout << 'X' << endl;
        else cout << num << endl;
    }
}