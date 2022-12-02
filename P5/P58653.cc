/*
    Write a program that reads a character and tells if it is a letter, if it is a vowel, if it is a consonant, if it is an uppercase letter, if it is a lowercase letter and if it is a digit.

    Input consists of a printable character, like a letter, or a digit, or a punctuation mark.

    Tell if the given character is a letter, a vowel, a consonant, an uppercase letter, a lowercase letter and a digit.
*/
#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

void check_character(char c) {
    bool is_letter = ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z'));
    bool is_vowel = false;
    bool is_consonant = false;
    bool is_uppercase = false;
    bool is_lowercase = false;
    bool is_digit = false;

    
    if (is_letter) {
        if (c <= 'Z') {
            is_uppercase = true;
            c = (c - 'A') + 'a';
        }
        else is_lowercase = true;

        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') is_vowel = true;
        else is_consonant = true;
    }
    else if (c >= '0' and c <= '9') {
        is_digit = true;
    }

    if (is_uppercase) c = (c - 'a') + 'A';

    print_line(c, "letter", is_letter);
    print_line(c, "vowel", is_vowel);
    print_line(c, "consonant", is_consonant);
    print_line(c, "uppercase", is_uppercase);
    print_line(c, "lowercase", is_lowercase);
    print_line(c, "digit", is_digit);
    
}

int main() {
    char c;
    cin >> c;
    check_character(c);
}
