/*
    Program that reads a letter, and that tells if it is an uppercase letter or a lowercase letter,
    and that also tells if it is a vowel or a consonant. 
    Here, assume that the vowels are ‘a’, ‘e’, ‘i’, ‘o’ and ‘u’, and their corresponding uppercase letters.
*/

#include <iostream>
using namespace std;

int main () {
    char x;
    cin >> x;
    if (x >= 'a' and x <= 'z')
        cout << "lowercase" << endl;
    else {
        cout << "uppercase" << endl;
        x = char('a' + (x - 'A'));
    }
    if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u') cout << "vowel" << endl;
    else cout << "consonant" << endl;

}
