/*
    Your task is to write a program that reads a character and prints if this is a letter, a digit, or it is not either a letter nor digit.

    The input is a character.

    The output is a line with the text “lletra” (for letters), “digit” (for digits) or “res” (for nothing) as required. [Those funny labels are due to a problem in the translation.]
*/
#include <iostream>
using namespace std;

int main() {
    char value;
    cin >> value;
    
    if ((value >= 'A' and value <= 'Z') or (value >= 'a' and value <= 'z')) cout << "lletra" << endl;
    else if ((value >= '0' and value <= '9')) cout << "digit" << endl;
    else cout << "res" << endl;
}