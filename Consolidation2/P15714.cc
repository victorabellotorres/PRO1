#include <iostream>
using namespace std;

int main() {
    int short_words = 0;
    int medium_words = 0;
    int long_words = 0;

    int count = 0;
    char ch;
    cin >> ch;
    while (ch != '.') {
        if (ch != '-') ++count;
        else {
            if (count > 0) {
                if (count < 5)++short_words;
                else if (count > 9)++long_words;
                else ++medium_words;
            } 
            count = 0;
        }

        cin >> ch;
    }

    if (count > 0) {
        if (count < 5)++short_words;
        else if (count > 9)++long_words;
        else ++medium_words;
    } 
    cout << short_words << ',' << medium_words << ',' << long_words << endl;

}