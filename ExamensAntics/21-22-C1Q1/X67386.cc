/*
    Given a word p and a sequence of words S, write the position of the first appearance of p in S.

    The input is a word p and a sequence of words S.

    The output is the position of the first apearance of p in S. The first word in S is at position 1,
    the second at position 2 and so on. If S does not contain p, then the output is "No existe".
*/
#include <iostream>
using namespace std;

int main() {
    string s_to_found;
    cin >> s_to_found;

    int count = 0;
    string s;
    bool found = false;
    while (cin >> s and not found) {
        ++count;
        found = (s == s_to_found);
    }
    if (found) cout << count << endl;
    else cout << "No existe" << endl;

}